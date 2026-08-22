#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;
    cout<<"\n before swap:"<<endl;
    cout<<"first number="<<a<<endl;
    cout<<"second number="<<b<<endl;
    //swapping using temporary variable
    temp=a;
    a=b;
    b=temp;
    cout<<"\n after swapping:"<<endl;
    cout<<"first number="<<a<<endl;
    cout<<"second number="<<b<<endl;
    return 0;  
}