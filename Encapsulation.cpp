//Encapsulation is wrapping up of data/properties and methods into a single class
//Encapsulation promotes data hiding - making properties/methods private so that they're hidden from the outside world

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