#include<bits/stdc++.h>
using namespace std ;
int main()
{
int n;
cin>>n;
for (int i=1;i<=n;++i)
{
 for (int j=n-1;j>=i;j--)
{ 
cout<<" ";

}
for(int z=1;z<(2*i);z++)
{cout<<"*";
}
	
 cout<<endl;
}
	
}
