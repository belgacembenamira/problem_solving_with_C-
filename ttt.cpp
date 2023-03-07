#include <bits/stdc++.h>
using namespace std ;
 int main()
{	
    int  ta[32],tb[32];
	int a,b,i=0;	long long z,y;
	cin>>a>>b;
	while(a!=0 and b!=0)
	{
		ta[i] =a%2;
		tb[i] =b%2;

		a/=2;
		b/=2;
		if(ta[i]==0 and tb[i]==0)
		{
			ta[i]=0 ;
			tb[i]=0;

		}
	//	cout<<ta[i]<<endl;
		z+=(pow(2,i)*ta[i]);
			y+=(pow(2,i)*tb[i]);
		i+=1;

	}
			cout<<y+z;
	return 0;
}
