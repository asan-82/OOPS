#include<iostream>
#include<string>
using namespace std;


class teacher{
    private:
    int salary;
    public:
string name;
string dept;

};

int main()
{
teacher t1;
t1.name="neesha";
cout<<t1.name;
//t1.salary=25000;   gives error , cant access pvt members
//cout<<t1.salary;   gives error
}