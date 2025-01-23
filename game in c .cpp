#include<iostream>
#include <string>
using namespace std;
int main()
{
    string n;
    bool start=false;
    bool stop=true;
    while (true)
    {
        cout<<">";
        cin>>n;
        if (n=="help"){
            cout<<"start--to start."<<endl;
            cout<<"stop --to stop."<<endl;
            cout<<"quit--to quit."<<endl;
        }
        else if(n=="start"){
            if (start){
                cout<<"Car is already start.";
            }
            else{
                start=true;
                cout<<"Car is start.";
            }
        }
        else if (n=="stop"){
            if (!(start)){
            cout<<"The car is already stopped.";
            }
            else{
                start=false;
                cout<<"The car is stop.";
            }
        }
        else if (n=="quit"){
            break;
        
        }
        else{
            cout<<"I can't understand it.";
        }
        
    }
}