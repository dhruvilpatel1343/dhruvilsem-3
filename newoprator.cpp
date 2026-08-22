//new operator exmple
#include<iostream>
using namespace std;
int main(){
    int *a=new int;
    *a=90;
    cout<<"address=="<<a<<endl;
    cout<<"value=="<<*a;
    return 0;
}