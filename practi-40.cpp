#include<iostream>
using namespace std;

    void swap(int*a,int*b)
    {
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
    }

int main()
{
    int x,y;
    cout<<"enter two numbers:";
    cin>>x>>y;

    cout<<"before swapping:x="<<x<<",y="<<y<<endl;

    swap( &x , &y );

    cout<<"after swapping:x="<<x<<",y="<<y;
    return 0;
}