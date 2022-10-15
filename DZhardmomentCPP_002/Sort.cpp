#include <iostream>
#include <string_view>
#include "Timer.h"
#include <string>
#include <fstream>

using namespace std;

/*3. ����������� ���������� ������� ���� � ����� ������ � ���.��� �������� ����������� 4 �������:
count_if � find
count_if � ���� for
���� for � find
2 ����� for
�������� ����� ������� ������� �������� � �������� ������.*/

size_t count_if_and_find(const string& s)
{
    Timer timer("����� �������� count_if and find");//���������� ������ ��� ����������� ������� ���������� ����
    string vowel = { "AaEeIiOoUuYy" }; //������ ������, ���������� ��� ������� ����� ���������
    auto result = count_if(s.begin(), s.end(), [&vowel](const auto& elem)
        {
            return vowel.find(elem) != string::npos;
        }); //������ ����������, ������� ����������� ��������� ������� count_if
            //��� �� count_if ��������� ������ s �� ������ �� ����� � � ������� ������ ���� �������� ������ vowel
            //���� ������� ������, �� ���������� ������ �������� � ������, ���� ��� ����������� npos
    timer.print();
    cout << "���������� ������� ����: " << "\t\t" << result << endl;
    return result; //���������� ��������� - ���-�� ������� ����
}

size_t count_if_and_for(const string& s)
{
    string vowel = { "AaEeIiOoUuYy" };
    Timer timer("����� �������� count_if and for");
    auto result = count_if(s.begin(), s.end(), [&vowel](const auto& elem)
        {
            for (const auto& ch : vowel)     //����� ������� char elem � ���� for � char ch, ������� �������� ����� �� ���� � ������ vowel
            {                                //���������� ������, ���� ���������� �������
                if (elem == ch)
                {
                    return true;
                }
            }
            return false;
        });
    timer.print();
    cout << "���������� ������� ����: " << "\t\t" << result << endl;
    return result;
}

size_t for_and_find(const string& s)
{
    string vowel = { "AaEeIiOoUuYy" };
    size_t result = 0; //������ ���������� ��� �������� ��������
    Timer timer("����� �������� for and find");
    for (const auto& elem : s) //����� elem ��������� ������ ������, � ������� ��������� �����
    {
        if (vowel.find(elem) != string::npos) //� ���� ������ ��� ������� ������
        {
            ++result; //����������� �������
        }
    }
    timer.print();
    cout << "���������� ������� ����: " << "\t" << result << endl;
    return result;
}

size_t for_for(const string& s)
{
    string vowel = { "AaEeIiOoUuYy" };
    size_t result = 0;
    Timer timer("����� �������� for and for");
    for (const auto& elem : s) //���� ��� ���������� ������� �� �����
    {
        for (const auto& ch : vowel) //���� ��� ���������� ������� � vowel
        {
            if (ch == elem)
            {                   //����� ������������ ��������� ������ ������ ������� vowel � ��������� �������� �� �����
                ++result;       //����������� �������, ���� ������ ������� ������
            }
        }
    }
    timer.print();
    cout << "���������� ������� ����: " << "\t" << result << endl;
    return result;
}