#include<iostream>
#include<string>
using namespace std;


class teacher{
    private:
    int salary;
    public:
string name;
string dept;
void setSalary(int s)
{
    salary=s;
}
int getSalary()
{
    return salary;
}

};

int main()
{
teacher t1;
t1.name="neesha";
t1.setSalary(25000);
cout<<t1.getSalary()<<endl;
cout<<t1.name;
}