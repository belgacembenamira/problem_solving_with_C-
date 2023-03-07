#include<iostream>
using namespace std ;
int main()
{ char x;
cin>>x;
if('A'<=x and 'Z'>=x)
{
x+=32;

 } 
else 
{x-=32;
}
cout<<x;
	return 0;
}
