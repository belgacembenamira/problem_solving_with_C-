#include<iostream>
using namespace std ;
int main()
{ long long x,a;
cin>>x;
do
{	a=x%10;
	x/=10;



} while(x!=0);

if(a%2==0) cout<<"EVEN";
else cout<<"ODD";
	return 0;
}
/* it=1 4125 x=412 a=5  410 aa=2 41 0 40 1 0 4*/
