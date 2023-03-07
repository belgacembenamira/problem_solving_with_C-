#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
long long  x,n,t=0,k=0,l=0;
cin>>x;
n=x;
while (x>0)
{
//00001235  123054 4 5 0

   t=t*10+(x%10);
   //120 012 = - 1204 00000

 if ( t!=0 )
   {

         //   cout<<k<<endl;
                 k =k*10+(x%10);


        }
        else
        {
              k =k*10;
        }
   x/=10;
}
cout<<k<<endl;
if(n-t==0) cout<<"YES";
else cout<<"NO";
    return 0;
}
