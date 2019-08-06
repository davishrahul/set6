#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input;
    int count=0;
    getline(cin,input);
    for(int i=0;i<input.length();i++)
    {
        if(isdigit(input[i]) || isalpha(input[i]) || (input[i]>=33 && input[i]<=64 ))
        {
            count++;
        }
    }
    if(count==input.length())
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    
    return 0;
}
