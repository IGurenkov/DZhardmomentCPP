#include <iostream>
#include <string>
#include <set>
#include <fstream>
#include <vector>
#include <windows.h>
#include <list>
using namespace std;

template <typename Type, typename Iterator>
void UniqueElements(const Iterator& begin, const Iterator& end)
{
    //Объявляем контейнер для хранения элементов
    set<Type> elements;
    //Копируем элементы в контейнер поочередно вставляя их в конец
    copy(begin, end, inserter(elements, elements.end()));
    //Пробегаемся и выводим элементы в консоль
    copy(elements.begin(), elements.end(), ostream_iterator<Type>(cout, " "));
    cout << endl;
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "УРОК 5" << endl << "СТУДЕНТ: ГУРЕНКОВ ИЛЬЯ АЛЕКСЕЕВИЧ" << endl << "ПРОГРАММА: MICROSOFT VISUAL STUDIO 2022" << endl;
    cout << "==============================" << endl;

    bool Loop = true;
    while (Loop)
    {
        cout << "1 - ШАБЛОННАЯ ФУНКЦИЯ ДЛЯ УНИКАЛЬНЫХ СЛОВ." << endl;
        cout << "2 - СОРТИРОВКА ВВЕДЕННЫХ ПРЕДЛОЖЕНИЙ ПО КОЛИЧЕСТВУ СЛОВ." << endl;
        cout << "0 - ВЫХОД" << endl;

        cout << "ВЫБЕРИТЕ ДЕЙСТВИЕ И НАЖМИТЕ ENTER: ";
        int X;
        if (cin >> X && X >= 0 && X <= 2) //Создаём небольшое меню с помощью кейсов
        {
            switch (X)
            {
            case 1:
            {
                system("cls");
                cout << "ЗАДАНИЕ 1" << endl;
                //Объявляем контейнер в котором будем хранить текст    
                list<string> file;
                //Читаем файл в поток
                ifstream fs("War and Peace.txt");
                string text;

                while (fs >> text) //В цикле вводим текст из потока в строковую переменную
                {
                    //Раскомментировать, чтобы удалить все знаки припенания
                    //тогда не будет повторов типа "What?", 
                    /*text.erase(remove_if(text.begin(),
                        text.end(),
                        [](unsigned char c) { return ispunct(c); }),
                        text.end());*/

                        //Затем вставляем текст из строковой переменной в контейнер
                    file.push_back(text);
                }

                cout << endl << "УНИКАЛЬНЫЕ ЭЛЕМЕНТЫ list<string>:" << endl << endl;
                //Используя шаблонную функцию указав итераторы на начало и конец контейнера
                //находим уникальные элементы
                UniqueElements<string>(file.begin(), file.end());

                vector<int> file2;
                ifstream fs2("Numbers.txt");
                int text2;
                while (fs2 >> text2)
                {
                    file2.push_back(text2);
                }
                cout << endl << "УНИКАЛЬНЫЕ ЭЛЕМЕНТЫ vector<int>: " << endl << endl;
                UniqueElements<int>(file2.begin(), file2.end());
                cout << "==============================" << endl << endl;
                break;
            }
            case 2:
            {
                system("cls");
                cout << "ЗАДАНИЕ 2" << endl << endl;
                cout << "ВВЕДИТЕ ВСЕ ПРЕДЛОЖЕНИЯ И НАЖМИТЕ ENTER: " << endl << endl;

                //Создаём свой компаратор
                const auto string_compare = [](const string& first, const string& second) {
                    return first.size() < second.size();
                };
                //Объявляем контейнер для хранения элементов
                set<string, decltype(string_compare) > sentences(string_compare);
                string sentence = "not empty";
                //Вводим предложения, для завершения ввода нажать Enter
                if (getline(cin >> ws, sentence))
                {
                    cout << endl << "ВВЕДЁННЫЕ ПРЕДЛОЖЕНИЯ:" << endl << endl;
                    cout << sentence << endl; //После нажатия на Enter выводятся введенные предложения
                    typename string::size_type p_start{}, p_end{};
                    //В цикле находим предложения ища в данной строке появление любого из символов 
                    //конца продолжения, сортируем элементы и записываем в контейнер
                    while (p_start != sentence.npos && p_end != sentence.npos)
                    {                        
                        p_end = sentence.find_first_of(".!?", p_start);
                        sentences.insert(sentence.substr(p_start, p_end - p_start));
                        p_start = sentence.find_first_not_of(" .!?", p_end);
                    }
                    cout << endl << "ПРЕДЛОЖЕНИЯ, ОТСОРТИРОВАННЫЕ ПО КОЛИЧЕСТВУ СЛОВ:" << endl << endl;
                    sentences.erase(string());
                    //Выводим отсортированный контейнер
                    for (auto& str : sentences)
                    {
                        cout << str << endl;
                    }
                }
                cout << "==============================" << endl << endl;
                break;
            }
            default:
            {
                Loop = false;
                break;
            }
            }
        }
        else
        {
            cout << "ВЫ ВВЕЛИ НЕКОРРЕКТНЫЕ ЗНАЧЕНИЯ! ПРОГРАММА ЗАВЕРШЕНА!" << endl;
            break;
        }
    }
    return 0;
}

