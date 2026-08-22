//destructor example
#include<iostream>
using namespace std;
class Destructor_Example{
    public:int a,b;
    public:Destructor_Example(int x,int y)
    {
        a=x;
        b=y;
        cout<<"constructor called";
    }
    public:void show(){
        cout<<a<<endl;
        cout<<b;
    }
        ~Destructor_Example(){
            cout<<"Destuctor called";
        }
};
int main(){
    Destructor_Example d(90,80);
    d.show();
    d.~Destructor_Example();
    return 0;
}