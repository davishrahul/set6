#include <iostream>
using namespace std;
int main()
    {   
        int number1,number2;
        cin>>number1>>number2;
        int product=number1*number2;
        if(product%2==0)
        {
            cout<<"even";
        }
        else
        {
            cout<<"odd";
        }
        
        return 0;
    }

