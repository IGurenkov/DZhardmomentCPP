#include <iostream>
#include <thread>
#include <mutex>
#include <string>
#include <vector>
#include <windows.h>
#include <algorithm>
using namespace std;
/*1. Создайте потокобезопасную оболочку для объекта cout.Назовите ее pcout.
Необходимо, чтобы несколько потоков могли обращаться к pcout и информация выводилась в консоль.
Продемонстрируйте работу pcout.*/

class pcout
{
private:    
    mutex m;
public:
    template<typename T>
    void m_pcout(T a)
    {
        m.lock();
        cout << "start thread " << a << endl;        
        this_thread::sleep_for(1s);
        cout << "end thread " << endl;
        m.unlock();
    }
};

/*2. Реализовать функцию, возвращающую i - ое простое число(например, миллионное простое число равно 15485863).
Вычисления реализовать во вторичном потоке.В консоли отображать прогресс вычисления(в основном потоке).*/
class Prime
{
private:

    int countprime = 0;
    float progress = 0;
    int i;
    int j;

public:

    void PrimeNumber(int n)
    {
        cout << "Thread ID = " << this_thread::get_id() << "=========== \tPrimeNumber Старт \t=============" << endl;
        for (i = 1; ; i++)
        {
            if (countprime != n)
            {
                for (j = 2; j * j <= i; j++)
                {
                    if (i % j == 0)
                    {
                        break;
                    }
                    else if (j + 1 > sqrt(i))
                    {
                        countprime++;
                        cout << i << " ";
                        this_thread::sleep_for(100ms);
                    }
                }
            }
            else
            {
                break;
            }
        }
        cout << "Thread ID = " << this_thread::get_id() << "=========== \tPrimeNumber Стоп \t=============" << endl;
        this_thread::sleep_for(1000ms);
    }
    int PrimeNumberReturn(int n)
    {
        
        this_thread::sleep_for(1000ms);
        if (countprime == n)
        {
            i -= 1;
        }
        
        return i;
    }

};
/*3. Промоделировать следующую ситуацию.Есть два человека(2 потока) : хозяин и вор.Хозяин приносит домой вещи
        (функция добавляющая случайное число в вектор с периодичностью 1 раз в секунду).При этом у каждой вещи есть своя ценность.
            Вор забирает вещи(функция, которая находит наибольшее число и удаляет из вектора с периодичностью 1 раз в 0.5 секунд),
            каждый раз забирает вещь с наибольшей ценностью.*/

class House
{
private:
    vector<int> plusnumber;

public:
    void PlusNumber()
    {
        cout << "Thread ID = " << this_thread::get_id() << "=========== \tPlusNumber Старт \t=============" << endl;
        for (int i = 0; i <= 20; i++)
        {            
            plusnumber.push_back(rand() % 100);            
            cout << "ДОБАВЛЕНО ЧИСЛО: " << *(plusnumber.end() - 1) << endl;
            this_thread::sleep_for(500ms);
        }
        cout << "Thread ID = " << this_thread::get_id() << "=========== \tPlusNumber Стоп \t=============" << endl;
    }

    void MinusNumber()
    {
        cout << "Thread ID = " << this_thread::get_id() << "=========== \tMinusNumber Старт \t=============" << endl;
        this_thread::sleep_for(3000ms);
        for (int i = 0; i <= 20; i++)
        {
            sort(plusnumber.begin(), plusnumber.end());
            cout << "УКРАДЕНО ЧИСЛО: " << plusnumber.back() << endl;
            plusnumber.pop_back();
            this_thread::sleep_for(1000ms); 
        }
        cout << "Thread ID = " << this_thread::get_id() << "=========== \tMinusNumber Стоп \t=============" << endl;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   //////////////////////////////
    //ЗАДАНИЕ 1
    pcout P;
    thread th1([&]()
        {
            P.m_pcout(7);
        });
    thread th2([&]()
        {
            P.m_pcout('A');
        });
    thread th3([&]()
        {
            P.m_pcout("Слово");
        });
    thread th4([&]()
        {
            P.m_pcout(5.786);
        });
        
    ///////////////////////////////////////
    //ЗАДАНИЕ 2
    Prime P1;
    int result;
    unsigned n = 100;

    thread th5([&]()
        {
            P1.PrimeNumber(n);
        });
    th5.join();

    result = P1.PrimeNumberReturn(n);
    cout << "Thread ID = " << this_thread::get_id() << "=========== \tPrimeNumberReturn Старт \t=============" << endl;
    cout << endl << "ПРОСТОЕ ЧИСЛО ПОД НОМЕРОМ " << n << ": " << result;
    cout << "Thread ID = " << this_thread::get_id() << "=========== \tPrimeNumberReturn Стоп \t=============" << endl;
    
    ////////////////////////////
    //ЗАДАНИЕ 3
    House H;

    thread plus([&]() {
        H.PlusNumber();
        });

    thread minus([&]() {
        H.MinusNumber();
        });


    th1.join();
    th2.join();
    th3.join();
    th4.join();
    
    plus.join();
    minus.join();
    /////////////////////////
    
    
}

