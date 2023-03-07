#include<iostream>
using namespace std ;
int main()
{ int a,b,c,d;
cin>>a>>b;
do
{		d=b%10;	c=a%10;
	a/=10;

	b/=10;

	
} while(a !=0 and b!=0);

	cout<<"\n"<<c+d;
		return 0;
}
//189 /10 180  9 180/10 18 0 18
