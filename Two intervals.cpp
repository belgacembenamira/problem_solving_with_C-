#include<bits/stdc++.h>
using namespace std ;
int main()
{
	int l1,r1,l2,r2;
	cin>>l1>>r1>>l2>>r2;
	if(((l2<=r1) and (l2>=l1))or ((l1<=r2) and (l1>=l2)  ))

	{ int d,f;
	if(r2>=r1)
	{
		f=r1;
		
	}
	else f=r2;
	if(l2>=l1)
	{
		d=l2;
	}
	else d=l1;
	cout<<d<<" "<<f
	;	
	}
	else 
	cout<<-1;
}
