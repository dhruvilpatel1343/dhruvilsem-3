#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array:";
    cin>>n;

    int *arr=new int[n];
    cout<<"enter array elements:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"array element are"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"";
    }
    delete[]arr;
    return 0;
}