#include<iostream>
#include<string.h>
#include <cstring>
using namespace std ;
int main ()
{
string  s1,f1,s2,f2;	
int a=1;
cin>>f1;
cin>>s1;
cin>>f2;
cin>>s2;
int k1=0,k2=0;

while(s2[k2]!='\0' and s1[k1]!='\0' )
{
if(s1[k1]!=s2[k2]) 
	{
		cout<<"NOT";
		a=0;
	
		 break ;
		}
		 k1++;  k2++;
}

if(a) cout<<"ARE Brothers";
		return 0;
}
