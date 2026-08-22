//unary with friend
#include<iostream>
using namespace std;
class Unary_With_Friend{
    public:int a;
    public:Unary_With_Friend(int x){
        a=x;
    }
    public:void show(){
        cout<<"Unary With Friend"<<a<<endl;
    }
    friend void operator-(Unary_With_Friend&oj);
};
void operator-(Unary_With_Friend&oj){
    oj.a=-oj.a;
}
int main()
{
    Unary_With_Friend obj(10);
    obj.show();
    return 0;
}