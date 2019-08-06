#include <iostream>
using namespace std;
int main()
{
    int number,sum=0,split;
    cin>>number;

    while(number>0)
    {
        split=number%10;
        sum=sum*10+split;
        number=number/10;
    }
    while(sum>0)
    {
        split=sum%10;
        cout<<split<<" ";
        sum=sum/10;
    }
    return 0;
}
