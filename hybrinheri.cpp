//hybrid inheritance
#include<iostream>
using namespace std;
class base1
{
    public:base1()
    {
        cout<<"base1 constructor called"<<endl;
    }
};
class base2
{
    public:base2()
    {
        cout<<"base2 constructor called"<<endl;
    }
};
class derived1:public base1,public base2
{
    public:derived1()
    {
        cout<<"derived1 constructor called"<<endl;
    }
};
int main()
{
    derived1 d;
    return 0;
}