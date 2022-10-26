#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <list>
#include <windows.h>
#include <random>

using namespace std;


/*1. Написать функцию, добавляющую в конец списка вещественных чисел элемент, 
значение которого равно среднему арифметическому всех его элементов.*/

void SetElementInEnd(list <float> LIST)
{        
    float sum = 0;
	cout << "ЭЛЕМЕНТЫ СПИСКА ДО ДОБАВЛЕНИЯ: " << endl << endl;
    for(auto &elem : LIST) //Выводим элементы списка
    {
        cout << elem << " ";
        sum += elem; //Суммируем элементы        
    }
	cout << endl << endl << "СРЕДНЕЕ АРИФМЕТИЧЕСКОЕ: ";
    float result = sum / LIST.size(); //Находим среднее арифметическое разделив сумму элементов на размер списка
    cout << result << endl << endl; //Выводим результат
	LIST.push_back(result); //Записываем результат в конец списка
	cout << "ЭЛЕМЕНТЫ СПИСКА ПОСЛЕ ДОБАВЛЕНИЯ: " << endl << endl;
    for (auto& elem : LIST) //Выводим обновлённый список
    {
        cout << elem << " ";        
    }
	cout << endl;
}

/*2. Создать класс, представляющий матрицу.Реализовать в нем метод, вычисляющий определитель матрицы.
Для реализации используйте контейнеры из STL.*/

template<typename T>
class Matrix
{
private:
	vector<vector<T>> MTRX;
	
	T determinant(vector<vector<int>> matrix)
	{		
		int determ = 0; // переменная определителя 
		if (matrix.size() == 1)//Нахождение определителя матрицы первого порядка
		{
			return matrix[0][0];
		}
		else if (matrix.size() == 2)//Нахождение определителя матрицы второго порядка
		{
			determ = (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]);
			return determ;
		}
		else //Нахождение определителя матрицы n-ого порядка
		{
			for (int p = 0; p < matrix[0].size(); p++)
			{
				//Перебираем элементы первой строки матрицы отбрасывая строку и столбец где есть этот элемент 
				//затем формируем матрицу из остальных элементов
				vector<vector<int>> tempMatrix; // Матрица для хранения значений 
				for (int i = 1; i < matrix.size(); i++)
				{
					//Итерируемся с первой строки, отбрасывая значения первой строки 
					vector<int> tempRow;
					for (int j = 0; j < matrix[i].size(); j++)
					{						
						if (j != p)
						{
							tempRow.push_back(matrix[i][j]);//Добавляем текущую ячейку в TempRow 
						}
					}
					if (tempRow.size() > 0)
					{
						tempMatrix.push_back(tempRow);
					}
					//После добавления каждой строки новой матрицы в вектор TempRow 
					//добавляем его к вектору TempMatrix, который является вектором, в котором сформируется новая матрица  
				}
				determ = determ + matrix[0][p] * pow(-1, p) * determinant(tempMatrix);
				//Вычисляем значение определителя рекурсивным способом 
				//где повторно вызывается функция, и ей передаётся вновь сформированная матрица 
				//пока не получим наш определитель 
			}
			return determ;
		}		
	}

public:
	Matrix(const size_t& cols, const size_t& rows)  //Конструктор, который принимает кол-во колонок и столбцов
	{
		MTRX.resize(cols, vector<T>(rows, 0));
	}

	void RandomInput() 
	{
		for (auto& a : MTRX)
		{
			for (auto& b : a)
			{
				b = rand() % 10; //Инициализируем матрицу рандомными числами
			}
		}
	}

	void Print() 
	{
		for (auto& row : MTRX) //Вывод значений матрицы
		{
			for (auto& a : row)
			{
				cout << a << " ";
			}
			cout << endl;
		}
		cout << endl;
	}	

	T CalculateDeterminant() //Метод, запускающий метод для вычисления определителя
	{
		return determinant(MTRX);
	}

	void size() 
	{
		int a = MTRX.size();
		int b = MTRX[0].size();
		cout << "РАЗМЕР МАТРИЦЫ: " << a << "x" << b << endl << endl; //Вывод размера матрицы
	}	
};

/*3. Реализовать собственный класс итератора, с помощью которого можно будет проитерироваться по диапазону 
целых чисел в цикле for - range - based.*/

class ForRangeBasedIterator
{
    vector<int> mVec;
    int* beginPtr;
    int* endPtr;

public:
	ForRangeBasedIterator(vector<int>& Vec) : mVec(Vec)
    {
		beginPtr = mVec.empty() ? nullptr : &mVec.front();
        endPtr = beginPtr + mVec.size();
    }

    int* begin()
    {
        return beginPtr;
    }

    int* end()
    {
        return endPtr;
    }
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "УРОК 3" << endl << "СТУДЕНТ: ГУРЕНКОВ ИЛЬЯ АЛЕКСЕЕВИЧ" << endl << "ПРОГРАММА: MICROSOFT VISUAL STUDIO 2022" << endl;
	cout << "==============================" << endl;

	bool Loop = true;
	while (Loop)
	{
		cout << "1 - ДОБАВЛЕНИЕ В КОНЕЦ СПИСКА СРЕДНЕГО АРИФМЕТИЧЕСКОГО." << endl;
		cout << "2 - ВЫЧИСЛЕНИЕ ОПРЕДЕЛИТЕЛЯ МАТРИЦЫ." << endl;
		cout << "3 - ИТЕРАТОР ДЛЯ for-range-based" << endl;
		cout << "0 - ВЫХОД" << endl;

		cout << "ВЫБЕРИТЕ ДЕЙСТВИЕ И НАЖМИТЕ ENTER: ";
		int X;
		if (cin >> X && X >= 0 && X <= 3) //Создаём небольшое меню с помощью кейсов
		{
			switch (X)
			{
			case 1:
			{
				system("cls");
				cout << endl;
				cout << "ЗАДАНИЕ 1" << endl;
				list <float> LIST{ 1.25, 2.3456, 6.105, 4, 3.984 };
				SetElementInEnd(LIST);
				cout << endl;
				break;
			}
			case 2:
			{
				system("cls");
				cout << endl;
				cout << "ЗАДАНИЕ 2" << endl;
				cout << "ВНИМАНИЕ! ЧЕМ БОЛЬШЕ РАЗМЕР МАТРИЦЫ ТЕМ ДОЛЬШЕ РАСЧЁТ ОПРЕДЕЛИТЕЛЯ!" << endl << endl;
				//srand(time(NULL)); раскомментить, если нужно, чтобы в матрицы всегда был разный рандом
				int size;
				cout << "ВВЕДИТЕЕ РАЗМЕР КВАДРАТНОЙ МАТРИЦЫ (ОДНО ЧИСЛО): ";
				cin >> size;

				Matrix<int> matrix(size, size);
				cout << endl;
				matrix.size();				
				cout << "ЗАПОЛНЕНИЕ МАТРИЦЫ СЛУЧАЙНЫМИ ЧИСЛАМИ:" << endl << endl;
				matrix.RandomInput();
				matrix.Print();
				cout << "ОПРЕДЕЛИТЕЛЬ МАТРИЦЫ: " << matrix.CalculateDeterminant() << endl << endl;
				break;
			}
			case 3:
			{
				system("cls");
				cout << endl;
				cout << "ЗАДАНИЕ 3" << endl;

				cout << "ПРОИТЕРИРОВАННЫЙ ВЕКТОР:" << endl << endl;
				vector<int> cont = { 1,1,0,8,1,9,8,0 };
				ForRangeBasedIterator iter(cont);
				for (auto i : iter)
				{
					cout << i << " ";
				}
				cout << endl << endl;
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

