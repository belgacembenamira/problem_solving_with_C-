#include<bits/stdc++.h>
using namespace std ;
int main()
{
	int a,b,c,f;
	char s,d;
	cin>>a>>s>>b>>d>>f;
	if(s=='+' )
	{ if(a+b==f ) 


	 cout<<"Yes";
 	else 
	cout<<a+b;
	
	}
	else if(s=='-' )
	{if  (a-b==f ) 
	 cout<<"Yes";
	
 	else 
	cout<<a-b;
	
	
 } 
		
	
	else
	{
			if(a*b==f) 
	 cout<<"Yes";
 	else 
	cout<<a*b;
	}
	
	return 0;
}
