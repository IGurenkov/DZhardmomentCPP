#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>
#include <fstream>
#include <string_view>
#include "Timer.h"
#include "Sort.h"
#include <string>



using namespace std;

//1. Реализуйте шаблонную функцию Swap, которая принимает два указателя и обменивает местами значения, 
//на которые указывают эти указатели(нужно обменивать именно сами указатели, переменные должны оставаться в тех же адресах памяти).

template <typename T>
const void Swap(T* a, T* b)
{
    T temp = *a; //Создаём временную переменную для хранения первого указателя
    *a = *b;     //Приравниваем один указатель другому
    *b = temp;   //Приравниваем второй указатель ко временной переменной, где хранится первый указатель
}

//2. Реализуйте шаблонную функцию SortPointers, которая принимает вектор указателей 
//и сортирует указатели по значениям, на которые они указывают.

template <typename T>
const void SortPointers(vector <T*> & Vec)
{    
    sort(Vec.begin(), Vec.end(), [](T* elem1, T* elem2) //Функция sort с лябдой пробегает вектор
        {
            return *elem1 < *elem2; //и возвращает меньший элемент сортируя по возрастанию,
                                    //если поменять знак на > то сортировка будет по убыванию
        });
    for (auto i : Vec) //Цикл для вывода элементов вектора
    {
        cout << *i << "  " << i << endl; //Выводим значение и адрес в памяти
    }
}

int main()
{  
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "УРОК 2" << endl << "СТУДЕНТ: ГУРЕНКОВ ИЛЬЯ АЛЕКСЕЕВИЧ" << endl << "ПРОГРАММА: MICROSOFT VISUAL STUDIO 2022" << endl;
    cout << "==============================" << endl;
        
    bool Loop = true;
    while (Loop)
    {
        cout << "1 - ШАБЛОННАЯ ФУНКЦИЯ ПО СМЕНЕ УКАЗАТЕЛЕЙ" << endl;
        cout << "2 - ШАБЛОННАЯ ФУНКЦИЯ СОРТИРОВКИ УКАЗАТЕЛЕЙ ПО ЗНАЧЕНИЮ" << endl;
        cout << "3 - ПОДСЧЁТ КОЛИЧЕСТВА ГЛАСНЫХ БУКВ РАЗНЫМИ СПОСОБАМИ" << endl;        
        cout << "0 - ВЫХОД" << endl;

        cout << "ВЫБЕРИТЕ ДЕЙСТВИЕ И НАЖМИТЕ ENTER:" << endl;
                        
        ifstream file("War and Peace.txt"); //Загружаем файл в поток
        file.seekg(0, ios::end); //Переходим к концу файла
        size_t size = file.tellg(); //Определяем размер файла
        file.seekg(0); //Переходим к нулевому байту в файле, началу
        string s(size, ' '); //Создаём строку размером с файл, заполненную пробелами
        file.read(&s[0], size); //Из потока file читается size байт и записывается в буфер по адресу нулевого элемента
        int X;
        if (cin >> X && X >=0 && X <= 3) //Создаём небольшое меню с помощью кейсов
        {
            switch (X)
            {
            case 1:
            {                
                cout << "==============================" << endl;
                int a = 5;
                int b = 8;

                cout << "ЧИСЛО: " << a << ", " << "АДРЕС: " << &a << endl << "ЧИСЛО: " << b 
                    << ", " << "АДРЕС: " << &b << endl << endl;

                Swap(&a, &b);
                cout << "ЧИСЛО: " << a << ", " << "АДРЕС: " << &a << endl << "ЧИСЛО: " << b 
                    << ", " << "АДРЕС: " << &b << endl << endl;

                cout << "==============================" << endl;
                break;
            }

            case 2:
            {                
                cout << "==============================" << endl;
                int A = 5, B = 4, C = 2, D = 3, E = 1, F = 6;
                vector <int*> vec = { &A, &B, &C, &D, &E, &F };
                cout << "ВЕКТОР И АДРЕСА ДО СОРТИРОВКИ:" << endl;
                cout << "==============================" << endl;
                for (auto j : vec)
                {
                    cout << *j << "  " << j << endl;
                }
                cout << endl;

                cout << "ВЕКТОР И АДРЕСА ПОСЛЕ СОРТИРОВКИ:" << endl;
                cout << "==============================" << endl;
                SortPointers(vec);
                                
                cout << "==============================" << endl;                
                break;
            }

            case 3:
            {
                cout << "==============================" << endl;
                count_if_and_find(s);
                cout << endl;
            
                count_if_and_for(s);
                cout << endl;
            
                for_and_find(s);
                cout << endl;
            
                for_for(s);
                cout << endl << endl;
                
                cout << "ВЫВОД: НАИБОЛЕЕ БЫСТРЫЙ ПОДСЧЁТ ЧЕРЕЗ count_if_and_find И for_and_find." << endl << endl;
                cout << "==============================" << endl;
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

