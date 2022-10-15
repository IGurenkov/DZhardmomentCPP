#include <iostream>
#include <string_view>
#include "Timer.h"
#include <string>
#include <fstream>

using namespace std;

/*3. Подсчитайте количество гласных букв в книге “Война и мир”.Для подсчета используйте 4 способа:
count_if и find
count_if и цикл for
цикл for и find
2 цикла for
Замерьте время каждого способа подсчета и сделайте выводы.*/

size_t count_if_and_find(const string& s)
{
    Timer timer("ВРЕМЯ ОПЕРАЦИИ count_if and find");//Активируем таймер для определения времени выполнения кода
    string vowel = { "AaEeIiOoUuYy" }; //Создаём строку, содержащую все гласные обоих регистров
    auto result = count_if(s.begin(), s.end(), [&vowel](const auto& elem)
        {
            return vowel.find(elem) != string::npos;
        }); //Создаём переменную, которой присваиваем результат функции count_if
            //Сам же count_if пробегает строку s от начала до конца и с помощью лямбды ищет элементы строки vowel
            //Если элемент найден, то возвращает индекс элемента в строке, если нет выбрасывает npos
    timer.print();
    cout << "КОЛИЧЕСТВО ГЛАСНЫХ БУКВ: " << "\t\t" << result << endl;
    return result; //Возвращаем результат - кол-во гласных букв
}

size_t count_if_and_for(const string& s)
{
    string vowel = { "AaEeIiOoUuYy" };
    Timer timer("ВРЕМЯ ОПЕРАЦИИ count_if and for");
    auto result = count_if(s.begin(), s.end(), [&vowel](const auto& elem)
        {
            for (const auto& ch : vowel)     //Затем создаем char elem и цикл for с char ch, которая является одной из букв в строке vowel
            {                                //Возвращает истину, если совпадение найдено
                if (elem == ch)
                {
                    return true;
                }
            }
            return false;
        });
    timer.print();
    cout << "КОЛИЧЕСТВО ГЛАСНЫХ БУКВ: " << "\t\t" << result << endl;
    return result;
}

size_t for_and_find(const string& s)
{
    string vowel = { "AaEeIiOoUuYy" };
    size_t result = 0; //Создаём переменную для хранения подсчёта
    Timer timer("ВРЕМЯ ОПЕРАЦИИ for and find");
    for (const auto& elem : s) //Здесь elem отдельный символ строки, в которую загружена книга
    {
        if (vowel.find(elem) != string::npos) //И если нужный нам элемент найден
        {
            ++result; //увеличиваем счётчик
        }
    }
    timer.print();
    cout << "КОЛИЧЕСТВО ГЛАСНЫХ БУКВ: " << "\t" << result << endl;
    return result;
}

size_t for_for(const string& s)
{
    string vowel = { "AaEeIiOoUuYy" };
    size_t result = 0;
    Timer timer("ВРЕМЯ ОПЕРАЦИИ for and for");
    for (const auto& elem : s) //Цикл для отдельного символа из книги
    {
        for (const auto& ch : vowel) //Цикл для отдельного символа в vowel
        {
            if (ch == elem)
            {                   //Здесь сравниваются отдельный символ строки гласных vowel с отдельным символом из книги
                ++result;       //Увеличиваем счетчик, если нужный элемент найден
            }
        }
    }
    timer.print();
    cout << "КОЛИЧЕСТВО ГЛАСНЫХ БУКВ: " << "\t" << result << endl;
    return result;
}