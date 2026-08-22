//dynamic initialization of object
#include<iostream>
using namespace std;
class Dynamic_Object{
    public:int p;
    public:Dynamic_Object(){
     public:Dynamic_Object(int x)
        p=x;
        cout<<"p="<<p<<endl;
    
    }
};
int main (){
    Dyanmic_Object O;
    int data;
    cout<<"Enter object data";
    cin>>data;
    O=Dynamic_Object(data);
    return 0;
}