#include<iostream>
using namespace std;
int isEven(int num)
{
    return !(num & 1);
}
int main()
{
    int num;
    cin>>num;
    if(isEven(num))
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
    
    return 0;
}
