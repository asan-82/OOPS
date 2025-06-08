#include <iostream>
#include <string>
using namespace std;

class Student
{

public:
    string name;
    int age;

    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class GradStudent : public Student
{

public:
    string subject;

    GradStudent(string name, int age, string subject) : Student(name, age)
    {
        this->subject = subject;
    }
    void getInfo()
    {
        cout << name << endl
             << age << endl
             << subject;
    }
};

int main()
{
    GradStudent g1("Aarushi", 22, "MATHS");
    g1.getInfo();
}