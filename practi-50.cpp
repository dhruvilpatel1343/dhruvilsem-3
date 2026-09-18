#include<iostream>
using namespace std;
class student
{
    public:
    student()
    {
        cout<<"constructor is called"<<endl;
    }
   ~ student()
    {
        cout<<"destructor is called"<<endl;
    }
};
int main()
{
    student s;
    cout<<"student object is called"<<endl;
    return 0;
}