#include<iostream>
using namespace std;

    bool ispalindrome(string str,int start,int end)
    {
        if(start>=end)
        return true;
        if(str [start]!=str[end])
        return false;
        return ispalindrome(str,start+1,end-1);
    }
    int main()
    {
        string str;
        cout<<"enter a string:";
        cin>>str;

        if(ispalindrome(str,0,str.length()-1))
        {
            cout<<"it is a palindrome";
        }
        else
        {
            cout<<"it is not a palindrome";
        }
        return 0;
    }