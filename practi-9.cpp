#include<iostream>
using namespace std;
int main()
{
    int n;
    long long factorial=1;
    cout<<"enter a number:";
    cin>>n;

    if(n>0)
    {
        cout<<"factorial is not defind for negative numbers";
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            factorial=factorial*i;
        }
        cout<<"factorial of "<<n<<"is"<<factorial;
    }
    return 0;
}