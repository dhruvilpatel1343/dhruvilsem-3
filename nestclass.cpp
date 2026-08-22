//nested class
#include<iostream>
using namespace std;
class shape{
    public:void shape_fun(){
        cout<<"outer class function"<< endl;
    }
    class traingle{
        public:void traingle_fun(){
            cout<<"inner class function"<<endl;
        } 
    };
};
int main(){
    shape s1;
    s1.shape_fun();
    shape::traingle f1;
    f1.traingle_fun();
    return 0;
}