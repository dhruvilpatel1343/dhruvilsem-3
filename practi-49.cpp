#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int age;
    void display()
    {
        cout<<"name="<<name<<endl;
        cout<<"age="<<age<<endl;
    }
};
int main()
{
    student s1,s2;
    s1.name="rahul";
    s1.age=20;

    s2.name="amit";
    s2.age=21;

    s1.display();
    s2.display();
    return 0;
}