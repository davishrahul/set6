#include <iostream>
using namespace std;
int main()
{
    int sum=0,rem,number;
    cin>>number;
    while(number>0)
    {
        rem=number%10;
        sum=sum+rem;
        number/=10;
    }
    cout<<sum;
}
