#include<iostream>
using namespace std;
class student
{
    public:void student_info()
    {
        cout<<"student name:rahul"<<endl;
    }
};
class marks : public student
{
    public:void show_marks()
    {
        cout<<"mark:85"<<endl;
    }
};
class result : public marks
{
    public:void show_result()
    {
        cout<<"result:pass"<<endl;
    }
};
int main()
{
    result r;
    r.student_info();
    r.show_marks();
    r.show_result();
    return 0;
}