#include<bits/stdc++.h>
using namespace std ;
 main ()
{
double  a,b,c,d;
	cin>>a>>b>>c>>d;
	if((a>c and b==d)) 
	cout<<"YES";
	else if (c>a and b==d)
	cout<<"NO";
	else
	{
			for(int i=1;i<b;++i)
	{
		a*=a;
	}
	for(int i=1;i<d;++i)
	{
		c*=c;
	}
	if(a>c) cout<<"YES";
	else cout<<"NO";
	}


}
