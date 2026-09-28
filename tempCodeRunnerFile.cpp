#include<iostream>
using namespace std;
int main()
{
    int a[3]={10,20,30};
    int *p=a;

    cout<<"first element="<<*p<<endl;
    p++;
    cout<<"second element="<<*p<<endl;
    p++;
    cout<<"third element="<<*p<<endl;

    return 0;
}