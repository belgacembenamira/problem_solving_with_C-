#include<bits/stdC++.h>
using namespace std ;
int main ()
{
int n=0;
cin>>n;
int t[n];
if(n==0)
{
cout<<0;
}
else if ( n==1)
{
cout <<0<<" "<<1;
}
else if (n==2)
{
cout<<0<<" "<<1<<" "<<1;
}
else 
{
t[0]=0; t[1]=t[2]=1;
cout<<t[0]<<" "<<t[1]<<" "<<t[2]<<" ";
for (int i=3; i<n;i++)
{ t[i]=t[i-1]+t[i-2];
if(i!=n-1)
cout<<t[i]<<" ";
else
cout<<t[i];
}
}
return 0;
}
