#include<iostream>
using namespace std;
class animal
{
    public:virtual void sound()
    {
        cout<<"animal makes sound"<<endl;
    }
};
class dog:public animal
{
    public:void sound()
    {
        cout<<"dog barks"<<endl;
    }
};
int main()
{
    animal * a;
    dog d;
    a=&d;
    a->sound();
    return 0;
}