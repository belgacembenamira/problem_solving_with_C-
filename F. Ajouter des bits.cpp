#include <bits/stdc++.h>
using namespace std ;
 int main()
{
    int ta[32],tb[32];
	unsigned long long a,b,i=0;
	int  z=0;
	cin>>a>>b;
	while(a!=0 )
	{
		ta[i] =a%2;

		a/=2;
		i+=1;

		}
		i=0;
		while( b!=0)
	{

		tb[i] =b%2;

		b/=2;
		if(ta[i]==1 and tb[i]==1)
		{
			ta[i]=0 ;
			tb[i]=0;

		}
	//	cout<<ta[i]<<endl;
		z+=(pow(2,i)*(ta[i]+tb[i]));

		i+=1;

	}

			cout<<z;
	return 0;
}
