#include <iostream>
using namespace std;
int main()
{
    int number1,number2,count=0;
    cin>>number1>>number2;
    int arr[number1];
    for(int i=0;i<number1;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<number1;j++)
    {
        if(arr[j]==number2)
        {
            count++;
        }
    }
    cout<<count;
}
