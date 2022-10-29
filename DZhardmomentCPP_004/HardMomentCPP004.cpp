#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>
#include <iterator>
#include <functional>
#include <numeric>
#include <list>
#include <deque>
#include <array>

using namespace std;

/*template<typename Type>
void insert_sorted(vector <Type> mVec, Type a) //Чисто для вектора с сортировкой
{
    sort(mVec.begin(), mVec.end());
    vector<int>::iterator Result;
    Result = lower_bound(mVec.begin(), mVec.end(), a);    
    mVec.insert(Result, a);
    for_each(mVec.begin(), mVec.end(), [](auto i) {cout << "[" << i << "]"; });
    
    cout << endl << endl;
};*/

template <typename Container, typename Value>
void insert_sorted(Container& container, const Value& value)
{     
    auto iter = lower_bound(container.begin(), container.end(), value); //Находим место для вставки элемента и записываем найденное место в переменную
    container.insert(iter, value); //Производим вставку элемента, указываем переменную с местом куда вставить и переменную, которую надо вставить
    for_each(container.begin(), container.end(), [](auto i) {cout << "[" << i << "]"; }); //Выводим на экран элементы контейнера

    cout << endl << endl;
};


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "УРОК 4" << endl << "СТУДЕНТ: ГУРЕНКОВ ИЛЬЯ АЛЕКСЕЕВИЧ" << endl << "ПРОГРАММА: MICROSOFT VISUAL STUDIO 2022" << endl;
    cout << "==============================" << endl;

    bool Loop = true;
    while (Loop)
    {
        cout << "1 - ВСТАВКА В ОТСОРТИРОВАННЫЙ КОНТЕЙНЕР (list<int>)." << endl;
        cout << "2 - ВСТАВКА В ОТСОРТИРОВАННЫЙ КОНТЕЙНЕР (vector<double>)." << endl;
        cout << "3 - ВСТАВКА В ОТСОРТИРОВАННЫЙ КОНТЕЙНЕР (deque<float>)." << endl;        
        cout << "4 - РАСЧЁТ ОШИБКИ ЦИФРОВОГО СИГНАЛА" << endl;
        cout << "0 - ВЫХОД" << endl;

        cout << "ВЫБЕРИТЕ ДЕЙСТВИЕ И НАЖМИТЕ ENTER: ";
        int X;
        if (cin >> X && X >= 0 && X <= 4) //Создаём небольшое меню с помощью кейсов
        {
            switch (X)
            {
            case 1:
            {
                system("cls");
                cout << "ЗАДАНИЕ 1" << endl << endl;
                cout << "КОНТЕЙНЕР ДО ВСТАВКИ: " << endl << endl;                
                list<int> Vec{ 100, 200, 300, 400, 500, 700, 800, 900 }; //Инициализируем упорядоченный контейнер

                for_each(Vec.begin(), Vec.end(), [](auto i) {cout << "[" << i << "]"; }); //Выводим его на экран

                cout << endl << endl;
                int Y = 0;
                cout << "ВВЕДИТЕ ЧИСЛО ДЛЯ ВСТАВКИ: ";
                cin >> Y;
                cout << endl;
                cout << "КОНТЕЙНЕР ПОСЛЕ ВСТАВКИ: " << endl << endl;

                insert_sorted(Vec, Y); //Применяем шаблонную функцию                
                break;
            }
            case 2:
            {
                system("cls");
                cout << "ЗАДАНИЕ 1" << endl << endl;
                cout << "КОНТЕЙНЕР ДО ВСТАВКИ: " << endl << endl;
                vector<double> Vec{ 100.1, 200.2, 300.3, 400.4, 500.5, 700.7, 800.8, 900.9 };                

                for_each(Vec.begin(), Vec.end(), [](auto i) {cout << "[" << i << "]"; });

                cout << endl << endl;
                double Y;
                cout << "ВВЕДИТЕ ЧИСЛО ДЛЯ ВСТАВКИ: ";
                cin >> Y;
                cout << endl;

                cout << "КОНТЕЙНЕР ПОСЛЕ ВСТАВКИ: " << endl << endl;

                insert_sorted(Vec, Y);                
                break;
            }
            case 3:
            {
                system("cls");
                cout << "ЗАДАНИЕ 1" << endl << endl;
                cout << "КОНТЕЙНЕР ДО ВСТАВКИ: " << endl << endl;
                deque<float> Vec{ 100.5, 200.6, 300.7, 400.8, 500.9, 700.11, 800.12, 900.13 };

                for_each(Vec.begin(), Vec.end(), [](auto i) {cout << "[" << i << "]"; });

                cout << endl << endl;
                float Y;
                cout << "ВВЕДИТЕ ЧИСЛО ДЛЯ ВСТАВКИ: ";
                cin >> Y;
                cout << endl;

                cout << "КОНТЕЙНЕР ПОСЛЕ ВСТАВКИ: " << endl << endl;

                insert_sorted(Vec, Y);                
                break;
            }            
            case 4:
            {
                system("cls");
                cout << "ЗАДАНИЕ 2" << endl << endl;
                vector<double> a(100); //Инициализируем вектор вещественных чисел аналогового сигнала размера 100
                generate(a.begin(), a.end(), []() {return (double)(rand() % 100001) / 1000; }); //Заполняем с помощью алгоритма случайными вещественными числами

                cout << "СГЕНЕРИРОВАННЫЙ АНАЛОГОВЫЙ СИГНАЛ:" << endl << endl;
                for_each(a.begin(), a.end(), [](double i) {cout << "[" << i << "]"; }); //Выводим элементы вектора на экран

                cout << endl << endl;

                vector<int> b(100); //Инициализируем вектор целых чисел цифрового сигнала размера 100
                copy(a.begin(), a.end(), b.begin()); //Копируем элементы аналогового вектора в цифровой, так как цифровой int, то отсекаются дробные части

                cout << "СГЕНЕРИРОВАННЫЙ ЦИФРОВОЙ СИГНАЛ:" << endl << endl;
                for_each(b.begin(), b.end(), [](int i) {cout << "[" << i << "]"; }); //Выводим элементы вектора на экран

                cout << endl << endl;

                cout << "РАССЧИТЫВАЕМ ОШИБКУ СИГНАЛА, ВЫЧИТАЕМ ИЗ ЧИСЕЛ ПЕРВОГО СИГНАЛА ЧИСЛА ВТОРОГО" << endl;
                cout << "И ВОЗВОДИМ ИХ В КВАДРАТ: " << endl << endl;
                //С помощью алгоритма вычитаем из элементов первого вектора элементы второго, возводим их в квадрат
                //и записываем в первый вектор, чтобы не создавать лишний вектор
                transform(a.begin(), a.end(), b.begin(), a.begin(), [](double i, double j) {return pow((i - j), 2); });
                for_each(a.begin(), a.end(), [](double i) {cout << "[" << i << "]"; }); //Выводим элементы вектора на экран

                cout << endl << endl;

                cout << "РАССЧИТЫВАЕМ ОШИБКУ СИГНАЛА, СУММИРУЕМ ЭЛЕМЕНТЫ ВЫШЕ:" << endl << endl;
                cout << "ОШИБКА РАВНА: " << accumulate(begin(a), end(a), 0.0) << endl << endl; //Складываем элементы вектора и выводим размер ошибки на экран
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

