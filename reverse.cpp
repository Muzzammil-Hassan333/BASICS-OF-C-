#include <iostream>
using namespace std;
int main()
{
    int x,r,t;
    cout<<"Enter a number :";
    cin>>x;
    for(t=x;t!=0;t=t/10){
        r=10*r+t%10;
    }
    cout<<"Actual number is :"<<x<<endl;
    cout<<"Number in reverse order is :"<<r;
    
}