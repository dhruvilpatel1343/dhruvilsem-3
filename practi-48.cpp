#include<iostream>
using namespace std;
int main()
{
    int*p=new int;
    *p=10;
    cout<<"value="<<*p<<endl;
    delete p;
    p=nullptr;

    cout<<"pointer is khow safe"<<endl;
    return 0;
}