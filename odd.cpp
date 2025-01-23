//we print the odd numbers
#include <iostream>//include a library iostream    1.include 2.define
using namespace std;//in iostream there is a namespace std 
float main()//indicate that the main function return int type of value 
{
    int count=1,odd=1;//declare two variables count=1 ,odd=1
    //do first and then check the condition
    do{
        if(count%2==1){
            cout<<count<<endl;
            odd++;
        }
         count++;
    }
       
        while(odd<=100);
}