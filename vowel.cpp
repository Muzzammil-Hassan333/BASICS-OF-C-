#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string s,v="",c="";
    int a=0,b=0;
    cout<<"Enter a string :";
    getline(cin,s);
    for(char i: s){
        if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' ||
        i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U'){
            v=v+i;
            a++;
        }
        else if (isalpha(i)){
            c=c+i;
            b=b+1;
        }
    
    }
    cout<<"Total number of vowel is :"<<a<<endl;
    cout<<"Vowel are :"<<v<<endl;
    cout<<"Total number of consonent is :"<<c<<endl;
    cout<<"Consonent is :"<<b<<endl;
}