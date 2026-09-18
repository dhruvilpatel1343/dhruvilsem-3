#include<iostream>
using namespace std;
int main ()
{
    int a=10;
    int *P=&a;
    int **p=&P;

    cout<<"value of a="<<a<<endl;
    cout<<"value using pointer="<<*p<<endl;
    cout<<"value using pointer to printer="<<**p<<endl;
    return 0;
}