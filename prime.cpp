#include <iostream>
using namespace std;
int main()
    {
        int n;
        bool prime=true;
        cout<<"Enter a number :";
        cin>>n;
        if (n<=1)
        {
            prime=false;
        }
        else
        {
            for(int i=2 ; i<n ; i++)
            {
                if(n%i==0)
                {
                    prime=false;
                    break;
                }
            }
            
            if(prime)
            {
                cout<<n<<" is a prime number .";
            }
            else
            {
                cout<<n<<" is not a prime number .";
            }
        }
    return 0;
    }