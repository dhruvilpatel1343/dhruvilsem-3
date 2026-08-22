//manipulation of string using oparator overloading 
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class String_Manip{
    public:char s1[20],s2[20];
    public:String_Manip(char x[],char y[]){
        strcpy(s1,x);
        strcpy(s2,y);
    }
    public:void show(){
        cout<<"concatination="<<s1<<endl;
    }
    void operator+(){
        strcat(s1,s2);
    }
};
int main()
{
    String_Manip obj("good","morning");
    obj.show();
    +obj;
    obj.show();
    return 0;
}