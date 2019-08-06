#include <iostream>
using namespace std;
int main()
{
    int count=0,number,rem;
    cin>>number;
    while(number>0)
    {
        rem=number%10;
        count++;
        number/=10;
    }
    cout<<count;
   return 0;
    
}
