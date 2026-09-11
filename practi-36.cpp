#include<iostream>
using namespace std;

bool isprime(int n,int i=2)
{
    if(n<=2)
    return (n==2);
    if(n%i==0)
    return false;
    if(i*i>n)
    return true;
    return isprime(n,i+1);
}
int main()
{
    int n;
    cout<<"enter a number :";
    cin>>n;

    if(isprime(n))
    {
        cout<<"is a prime number";
    }
    else
    {
        cout<<"is a not prime number";
    }
    return 0;
}