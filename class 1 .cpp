#include <iostream>
#include <string>
using namespace std;

class car{
    
    public:
        float speed;
        string name;
        int model;
        int price;
        
        
        car(float s, string n, int m, int p){
            speed=s;
            name=n;
            model=m;
            price=p;
        }
        
        void car_run(float distance)
        {
            cout<<name<<" will take "<<distance/speed<< "hours to cover "<<distance<<" km";
        }
    
};







int main()
{
    car honda(200,"h2",564,400);
    car toyota(100,"t1",1543,1000);
    honda.car_run(0);
    return 0;
}