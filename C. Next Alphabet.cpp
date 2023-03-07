#include<bits/stdc++.h>
using namespace std ;
int main()
{
	char x;
	cin>>x;
	if( (x<'a')or ( char(x+1)>'z'))
	cout<<"a";
	else 
	cout<<char(x+1);
}
