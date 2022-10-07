#include <iostream> 
#include <string>
#include <optional>
#include <tuple>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <fstream>
#include <sstream>
using namespace std;

/*1. Создайте структуру Person с 3 полями: фамилия, имя, отчество.Поле отчество должно быть опционального типа, 
т.к.не у всех людей есть отчество.Перегрузите оператор вывода данных для этой структуры.Также перегрузите операторы < и == (используйте tie).*/

struct Person
{
    string Lastname;
    string Name;    
    optional <string> Fathername;

    friend ostream& operator << (ostream& out, const Person& mPerson);
    friend bool operator < (const Person& person1, const Person& person2);
    friend bool operator == (const Person& person1, const Person& person2);   
};
ostream& operator << (ostream& out, const Person & mPerson)
{
    if (mPerson.Fathername.has_value())
    {
        return out << setw(11) << mPerson.Lastname << setw(10) << mPerson.Name << setw(4) << " " << mPerson.Fathername.value() << "\t";
    }
    else 
    { 
        return out << setw(11) << mPerson.Lastname << setw(10) << mPerson.Name << "\t\t\t";
    }
};
bool operator < (const Person& person1, const Person& person2)
{
    return tie(person1.Lastname, person1.Name, person1.Fathername) < tie(person2.Lastname, person2.Name, person2.Fathername);
};
bool operator == (const Person& person1, const Person& person2)
{
    return tie(person1.Lastname, person1.Name, person1.Fathername) == tie(person2.Lastname, person2.Name, person2.Fathername);
};

/*2. Создайте структуру PhoneNumber с 4 полями:
· код страны (целое число)
· код города (целое число)
· номер (строка)
· добавочный номер (целое число, опциональный тип)
Для этой структуры перегрузите оператор вывода. Необходимо, чтобы номер телефона выводился в формате:
+7(911)1234567 12, где 7 – это номер страны, 911 – номер города, 1234567 – номер, 12 – добавочный номер.
Если добавочного номера нет, то его выводить не надо. Также перегрузите операторы < и == (используйте tie)*/

struct PhoneNumber
{
    unsigned int CountryCode = 1;
    unsigned int CityCode = 1;
    string TelephoneNumber;
    optional <unsigned int> Additional;    

    friend ostream& operator << (ostream& out, const PhoneNumber & mPhNum);
    friend bool operator < (const PhoneNumber& PhNum1, const PhoneNumber& PhNum2);
    friend bool operator == (const PhoneNumber& PhNum1, const PhoneNumber& PhNum2);
};

ostream& operator << (ostream& out, const PhoneNumber & mPhNum)
{
    if (mPhNum.Additional.has_value())
    {
        return out << "\t" << "+" << mPhNum.CountryCode << " " << "(" << mPhNum.CityCode << ")" << " "
            << mPhNum.TelephoneNumber << " " << mPhNum.Additional.value();
    }
    else
    {
        return out << "\t" << "+" << mPhNum.CountryCode << " " << "(" << mPhNum.CityCode << ")" << " "
            << mPhNum.TelephoneNumber;
    }    
};
bool operator < (const PhoneNumber& PhNum1, const PhoneNumber& PhNum2)
{
    return tie(PhNum1.CountryCode, PhNum1.CityCode, PhNum1.TelephoneNumber, PhNum1.Additional) < 
        tie(PhNum2.CountryCode, PhNum2.CityCode, PhNum2.TelephoneNumber, PhNum2.Additional);
};
bool operator == (const PhoneNumber& PhNum1, const PhoneNumber& PhNum2)
{
    return tie(PhNum1.CountryCode, PhNum1.CityCode, PhNum1.TelephoneNumber, PhNum1.Additional) == 
        tie(PhNum2.CountryCode, PhNum2.CityCode, PhNum2.TelephoneNumber, PhNum2.Additional);
};

//Задание 3
/*3. Создайте класс PhoneBook, который будет в контейнере хранить пары : Человек – Номер телефона.Конструктор этого класса должен принимать параметр 
типа ifstream – поток данных, полученных из файла.В теле конструктора происходит считывание данных из файла и заполнение контейнера.Класс PhoneBook 
должен содержать перегруженный оператор вывода, для вывода всех данных из контейнера в консоль.
В классе PhoneBook реализуйте метод SortByName, который должен сортировать элементы контейнера по фамилии людей в алфавитном порядке.Если фамилии 
будут одинаковыми, то сортировка должна выполняться по именам, если имена будут одинаковы, то сортировка производится по отчествам.Используйте алгоритмическую функцию sort.
Реализуйте метод SortByPhone, который должен сортировать элементы контейнера по номерам телефонов.Используйте алгоритмическую функцию sort.
Реализуйте метод GetPhoneNumber, который принимает фамилию человека, а возвращает кортеж из строки и PhoneNumber.Строка должна быть пустой, 
если найден ровно один человек с заданном фамилией в списке.Если не найден ни один человек с заданной фамилией, то в строке должна быть запись 
«not found», если было найдено больше одного человека, то в строке должно быть «found more than 1».
Реализуйте метод ChangePhoneNumber, который принимает человека и новый номер телефона и, если находит заданного человека в контейнере, то меняет его 
номер телефона на новый, иначе ничего не делает.*/


class PhoneBook
{
private:

    vector <pair <Person, PhoneNumber> > m_Person_PhoneNumber;    

public:
    
    PhoneBook(ifstream& filestream)
    {
        string Name;
        string Lastname;        
        optional<string> Fathername;
        unsigned int CountryCode;
        unsigned int CityCode;
        string TelephoneNumber;
        optional<unsigned int> Additional;                

        if (filestream.is_open())
        {
            while (filestream >> Lastname >> Name >> Fathername.emplace() >> CountryCode >> CityCode >> TelephoneNumber >> Additional.emplace())
            {
                if (Fathername.has_value())
                {
                    if (Fathername.value() == "-")
                    {
                        Fathername = nullopt;
                    }
                }
                Person person(Lastname, Name, Fathername);
                
                if (Additional.has_value())
                {
                    if (Additional.value() == 0)
                    {
                        Additional = nullopt; 
                    }   
                }

                PhoneNumber phoneNum(CountryCode, CityCode, TelephoneNumber, Additional);

                m_Person_PhoneNumber.push_back(make_pair(person, phoneNum));
            }
        }
        filestream.close();
    }
    
    friend ostream& operator << (ostream& out, PhoneBook& PhBook);
    
    void SortByPhone()
    {  
        std::sort(m_Person_PhoneNumber.begin(), m_Person_PhoneNumber.end(), [](auto& left, auto& right)
            {
                return left.second < right.second;
            });
               
    }

    void SortByName()
    {
        
        sort(m_Person_PhoneNumber.begin(), m_Person_PhoneNumber.end(), [](auto& left, auto& right)
            {
                return left.first < right.first;
            });
              
    }
    
    tuple<string, PhoneNumber> GetPhoneNumber(const string& lastname)
    {
        vector <PhoneNumber> number;
        pair <string, PhoneNumber> result;
        
        for_each(m_Person_PhoneNumber.begin(), m_Person_PhoneNumber.end(),
            [&lastname, &number](const auto& rec)
            {
                if (lastname == rec.first.Lastname)
                {
                    number.push_back(rec.second);
                }
            });
        if (number.size() == 0)
        {
            result = make_pair("  No data found", PhoneNumber{});            
        }
        else if (number.size() == 1)
        {
            result = make_pair("", *(number.begin()));
        }
        else
        {
            result = make_pair("  Found more than 1 contact", PhoneNumber{});
        }
        return result;
    }

    bool ChangePhoneNumber(const Person& person, const PhoneNumber& mPhonNum)
    {
        for (auto& entry : m_Person_PhoneNumber)
        {
            if (person == entry.first)
            {
                entry.second = mPhonNum;
                return true;
            }
        }
        return false;       
    }
};

ostream& operator << (ostream& out, PhoneBook& PhBook)
{
    for (const auto& [person, number] : PhBook.m_Person_PhoneNumber)
    {
        out << person << setw(5) << number << endl;
    }
    return out;
}

int main()
{
    cout << endl << "\t\t   --------Telephone Book--------" << endl << endl;
    ifstream file("PhoneBook.txt"); // путь к файлу PhoneBook.txt PhoneBook book(file);
    PhoneBook book(file);
    cout << book;
    cout << endl << "\t\t   --------SortByPhone--------" << endl << endl;
    book.SortByPhone();
    cout << book;
    cout << endl << "\t\t   --------SortByName--------" << endl << endl;
    book.SortByName();
    cout << book;
    cout << endl << "   --------GetPhoneNumber--------" << endl;
    // лямбда функция, которая принимает фамилию и выводит номер телефона
    //человека, либо строку с ошибкой
        auto print_phone_number = [&book](const string& surname) {
        cout << surname;
        auto answer = book.GetPhoneNumber(surname);
        if (get<0>(answer).empty())
            cout << get<1>(answer);
        else
            cout << get<0>(answer);
        cout << endl;
    };
    // вызовы лямбды
    print_phone_number("Ivanov");
    print_phone_number("Petrov");
    cout << endl << "\t\t   --------ChangePhoneNumber--------" << endl << endl;
    book.ChangePhoneNumber(Person{ "Kotov", "Vasilii", "Eliseevich" },
        PhoneNumber{ 7, 123, "15344458", nullopt });
    book.ChangePhoneNumber(Person{ "Mironova", "Margarita", "Vladimirovna" },
        PhoneNumber{ 16, 465, "9155448", 13 });
    cout << book;

    return 0;
}

