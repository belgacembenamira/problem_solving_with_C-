#include<bits/stdC++.h>
using namespace std ;
int main ()
{
int k,s,c=0;
cin>>k>>s;
for (int i=0 ;i<k ;i++)
{

for (int j=0 ;j<k ;j++)
{	
for (int z=0 ;z<k ;z++)
{
 if(i+j+z==s) c++;
}
}	
}
cout<<c;
return 0;
}
