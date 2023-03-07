#include<bits/stdc++.h>
using namespace std ;
int main()
{
	short int a,b,i=0,c,d,test=1;
	cin>>a>>b;
	while(i<=100)
	{ 		c=0;d=0;
		for(short int j=i;j<a+b+i;j+=1)
		{
			if(j%2==0) c=c+1;
			else d+=1;
			if(c==b and d==a) 
		{   cout<<"YES";
			test=0;
			break ;
		}
			
		}
		if(test ==0) break;
		
		i+=1;
	}
	if(test) cout<<"NO";
	
}
