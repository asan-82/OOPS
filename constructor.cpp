// constructor is a special type of func with no return type and has the same name as the class
//called as soon as an obj is created
//memory is allocated on obj creation
// constructor types: default and parameterized, default is called on its own as soon as the obj is created 
//always declare constructor in public because main can only access public data and methods
// multiple constructors can be created using either different types or different number of parameters or both
// the above concept is called as CONSTRUCTOR OVERLOADING

#include<iostream>
#include<string>
using namespace std;


class teacher{

    private:
string name;
string dept;
int salary;
public:
teacher(string n, string d, int s)
{
    name=n;
    dept=d;
    salary=s;
}

void getData()
{
    cout<<name<<endl<<dept<<endl<<salary;
}
};

int main()
{
teacher t1("neesha","CSE",70000);
t1.getData();



}