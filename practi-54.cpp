#include<iostream>
using namespace std;
class calculator
{
    public:int add (int a,int b)
    {
        return a+b;
    }
    int add(int a,int b,int c)
    {
        return a+b+c;
    }
};
int main()
{
    calculator c;
    cout<<"sum of 2 number="<<c.add(10,20)<<endl;
    cout<<"sum of 3 number="<<c.add(10,20,30)<<endl;
    return 0;
}