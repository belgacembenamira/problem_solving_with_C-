#include<iostream>
using namespace std ;
int main ()
{
int a,b,c,max,min;	
cin>>a>>b>>c;
if(a>=b)
{
	max=a;
	min=b;
	if(c>=max)
	max=c;
	if(c<=min)
	min=b;
	
}
else
{
	max=b;
	min=a;
	if(c>=max)
	max=c;
	if(c<=min)
	min=c;
}
cout<<min<<" "<<max;
	return 0;
}
