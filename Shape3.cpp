#include<bits/stdc++.h>
using namespace std ;
int main()
{ short int n=0,b;
cin>>n;
b=n;
for(int i=1;i<=n;i++)
{
if(i<=(n/2))
{
for (int j=(n/2)-1;j>=i;j--)
{ cout <<" ";
}
for(int k=1;k<(2*i); k++)
{ cout <<"*";
}

}
else 
{
for (int j=1;j<(i-(n/2));j++)
{
cout<<" ";
}
for(int k=b;k>=1; k-=2)
{ cout <<"*";
}
b--;
}
cout<<endl;
}
return 0;
}
