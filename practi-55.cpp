#include<iostream>
using namespace std;
class student
{
    static int count;
    public:static void show count()
    {
        cout<<"number of object="<<count<<endl;
    }
    student()
    {
        count ++;
    }
};
int student::count=0;
int main()
    {
        student s1;
        student s2;
        student s3;
        
    }