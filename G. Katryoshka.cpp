#include<bits/stdc++.h>
using namespace std ;
int main ()
{ long long e,m,b,t=0;
cin>>e>>m>>b;
long long m2=min(e,min(m,b));

	if (e==0)
{
	cout<<0;
	return 0;
}
if (e==1)
{
	cout<<1;
	return 0;
}


if(m2==e )
{



		t+=e;
		b-=e;
		e=0;
		cout<<t;




}

else
{

		t+=b;
		b=0;
		m-=b;
		e-=b;
		cout<<t;

	return 0;


}




}
