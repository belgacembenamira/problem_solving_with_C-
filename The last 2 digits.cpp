#include<bits/stdc++.h>
using namespace std ;
int main ()
{
int  a,b,c,d;
	cin>>a>>b>>c>>d;
	if(((a%100)*(b%100)*(c%100)*(d%100)) %100<10)
		
	cout<<0<< ((a%100)*(b%100)*(c%100)*(d%100)) %100;
	else 
		cout <<((a%100)*(b%100)*(c%100)*(d%100)) %100;

}
