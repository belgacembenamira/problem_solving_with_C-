#include<iostream>
using namespace std ;
int main()
{ double x,y;
cin>>x>>y;
if (x==0 or y==0)
{
	if(x==0 and y!=0) cout<<"Eixo Y";
	else if (y==0 and x!=0) cout<<"Eixo X";
	else cout<<"Origem";
}
else 
{
	if(x>=0 and y>=0 ) cout<<"Q1";
else if (x>=0 and y<0 ) cout<<"Q4";
else if (x<0 and y<0 ) cout<<"Q3";
else  cout<<"Q2";
	return 0;
}
}

/* it=1 4125 x=412 a=5  410 aa=2 41 0 40 1 0 4*/
