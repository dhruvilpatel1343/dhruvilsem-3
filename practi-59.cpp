#include<iostream>
using namespace std;
class student 
{
    public:void student_info()
    {
        cout<<"student name:rahul"<<endl;
    }
};
class college
{
    public:void college_info()
    {
        cout<<"college:abccollege"<<endl;
    }
};
class result:public student,public college
{
    public:void show_result()
    {
        cout<<"marks:85"<<endl;
    }
};
int main()
{
    result r;
    r.student_info();
    r.college_info();
    r.show_result();
    return 0;
}