#include <iostream>
#include<string.h>
using namespace std;

void pallindrome()
{
    string s1;
    getline(cin,s1);
    int flag=1;
    int l=s1.length();
    for(int i=0,j=(l-1);i<j;i++,j--)
    {
        if(str[i]!=str[j]){
            flag=0;
        }
    }
    if(flag==0){
        cout<<" No it is not a Palindrome";
    }
    else{
        cout<<" Yes, it is a palindrome";
    }
}
int main()
{   
    pallindrome();
    return 0;
}