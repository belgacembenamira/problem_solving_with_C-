#include<bits/stdc++.h>
using namespace std ;
int main()
{
	 long double a,b,c,d;
	cin>>a>>b>>c>>d;
	if( a+b-c==d or a-b+c==d or (a*b)-c==d or a-(b*c)==d or (a*b)+c==d or a+(b*c)==d)
	//or a+b-c==d or a-b+c==d or (a*b)-c==d or a-(b*c)==d or (a*b)+c==d or a+(b*c)==d
	cout<<"YES";
	else
	cout<<"NO";
	return 0 ;
}
