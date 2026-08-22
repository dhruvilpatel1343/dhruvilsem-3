//class and bject example
#include<iostream>
using namespace std;
class point{
    public:int x;
    public:int y;
};
int main(){
    point p1;//instance
    p1.x=60;
    p1.y=90;
    cout<<"value of x="<<p1.x<<endl;
    cout<<"value of y="<<p1.y;
    return 0;
}