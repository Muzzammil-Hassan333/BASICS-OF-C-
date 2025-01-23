#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float c;
    cout<<"Enter a number :";
    cin>>c;
    cout<<"You entered :"<<setw(1)<<fixed<<setprecision(3)<<c;
}