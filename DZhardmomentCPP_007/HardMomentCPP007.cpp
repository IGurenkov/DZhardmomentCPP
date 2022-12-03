#include <iostream>
#include <string>
#include <fstream>
#include "Student.pb.h"
#include <windows.h>

using namespace std;

class IMethods
{
    virtual double GetAverageScore(const MyNameSpace::FullName& name) = 0;
    virtual string GetAllInfo(const MyNameSpace::FullName& name) = 0;
    virtual string GetAllInfo() = 0;
};

class IRepository
{
    virtual void Open() = 0; // бинарная десериализация в файл
    virtual void Save() = 0; // бинарная сериализация в файл
};

namespace MySpace 
{
    MyNameSpace::StudentsGroup studentsgroup;

    class StudentsGroup : public IRepository, public IMethods
    {
    private:
        MyNameSpace::StudentsGroup m_StudentsGroupSample;
    public:
        StudentsGroup()
        {
            this->m_StudentsGroupSample = m_StudentsGroupSample;
        }        

        void Open() override
        {
            ifstream in("AllStudents.bin", ios_base::binary);
            try
            {
                studentsgroup.ParseFromIstream(&in);
            }
            catch (exception)
            {
                cout << "ОШИБКА ОТКРЫТИЯ ФАЙЛА!" << endl;
            };
                            
        }

        void Save() override
        {  
            ofstream out("AllStudents.bin", ios_base::binary);
            
            try 
            {
                studentsgroup.SerializeToOstream(&out);                
            }
            catch(exception)
            {
                cout << "ОШИБКА СОХРАНЕНИЯ ФАЙЛА!" << endl;
            };
        }

        double GetAverageScore(const MyNameSpace::FullName& name) override
        {
            int i = 0;
            double average;
            for (const auto& stud : studentsgroup.student())
            {
                if (stud.fullname().lastname() == name.lastname() && stud.fullname().name() == name.name())
                {
                    cout << "СРЕДНЯЯ ОЦЕНКА: " << stud.pointsaverage() << endl;
                    average = stud.pointsaverage();
                    i++;
                }
            }

            if (i == 0)
            {
                cout << "НЕ НАШЛОСЬ НИ ОДНОГО УЧЕНИКА!" << endl;
            }
            else if (i >= 2)
            {
                cout << "БОЛЬШЕ ОДНОГО УЧЕНИКА С ТАКОЙ ФАМИЛИЕЙ!" << endl;
            }
            return average;
        }

        string GetAllInfo(const MyNameSpace::FullName& name) override
        {
            int i = 0;
            for (const auto& stud : studentsgroup.student())
            {
                if (stud.fullname().lastname() == name.lastname() && stud.fullname().name() == name.name())
                {
                    cout << "Ф.И.О.: " << stud.fullname().lastname() << " " << stud.fullname().name() << " " << stud.fullname().fathername() << \
                        " ОЦЕНКИ: ";
                    for (auto mark : stud.points())
                    {
                        cout << mark << " ";
                    }
                    cout << "СРЕДНЯЯ ОЦЕНКА: " << stud.pointsaverage() << endl;
                    i++;
                }

            }

            if (i == 0)
            {
                cout << "НЕ НАШЛОСЬ НИ ОДНОГО УЧЕНИКА!" << endl;
            }
            return {};
        }

        string GetAllInfo() override
        {
            for (const auto stud : studentsgroup.student())
            {
                cout << "Ф.И.О.: " << stud.fullname().lastname() << " " << stud.fullname().name() << " " << stud.fullname().fathername() << \
                    " ОЦЕНКИ: ";
                for (auto mark : stud.points())
                {
                    cout << mark << " ";
                }
                cout << "СРЕДНЯЯ ОЦЕНКА: " << stud.pointsaverage() << endl;
            }

            if (studentsgroup.student_size() == 0)
            {
                cout << "В ГРУППЕ ПОКА НЕТ СТУДЕНТОВ!" << endl;
            }
            return {};
        }        
    };
}

double average(const google::protobuf::RepeatedField<int32_t>& points)
{
    double s = 0;
    for (const int& i : points)
    {
        s += i;
    }
    return round((s / points.size()) * 100) / 100;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    auto name1 = make_unique<MyNameSpace::FullName>();
    name1->set_lastname("Иванов");
    name1->set_name("Иван");
    name1->set_fathername("Иванович");

    auto name2 = std::make_unique<MyNameSpace::FullName>();
    name2->set_lastname("Обеив");
    name2->set_name("Иван");
    name2->set_fathername("Кинобьевич");
    
    auto student1 = std::make_unique<MyNameSpace::Student>();
    student1->set_allocated_fullname(name1.release());
    student1->add_points(3);
    student1->add_points(4);
    student1->add_points(5);
    student1->set_pointsaverage(average(student1->points()));

    auto student2 = std::make_unique<MyNameSpace::Student>();
    student2->set_allocated_fullname(name2.release());
    student2->add_points(3);
    student2->add_points(5);
    student2->add_points(2);
    student2->set_pointsaverage(average(student2->points()));

    MySpace::studentsgroup.mutable_student()->AddAllocated(student1.release());
    MySpace::studentsgroup.mutable_student()->AddAllocated(student2.release());

    MySpace::StudentsGroup studentsgroup1;
    studentsgroup1.GetAllInfo();
    studentsgroup1.GetAverageScore(MySpace::studentsgroup.student(1).fullname());
    studentsgroup1.GetAllInfo(MySpace::studentsgroup.student(0).fullname());

    studentsgroup1.Save();
    studentsgroup1.Open();

    return 0;
}
