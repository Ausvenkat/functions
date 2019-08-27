#include <iostream>
using namespace std;

int maximum(int a, int b)
{
if(a>b)
return a;
else if(b>a)
return b;
}
int minimum(int a, int b)
{
if(a<b)
return a;
else if(b<a)
return b;
}
int main()
{
int n1, n2;
cin>>n1>>n2;
int max=maximum(n1,n2);
int min=minimum(n1,n2);
cout<<max;
cout<<min;
}
