#include<iostream>
#include<string.h>
#include <stdlib.h>
using namespace std ;
int main ()
{

string s1="belgacem ben amira",s2="";
int i=0,k=0;
s2=s1.substr(9,3);
/*
while(s1[i] !='\0')	
{ if(s1[i]=='b'and s1[i+1]=='e' and s1[i+2]=='n' )
{
	s2[k]=s1[i];
	k+=1;

	}	
	
	i+=1;
}
s2[k+1]='\0';
*/
 cout<<s2;
		return 0;
}
