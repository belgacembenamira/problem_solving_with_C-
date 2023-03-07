#include<bits/stdC++.h>
using namespace std ;
int main()
{
short int n;
cin>>n;
int a =n;
for(int i=1;i<n;i++)
{
if(i<=(n/2))
{
for(int j=(n/2)-1;j>=i;j--)
{cout <<" ";
}
for(int l=1; l<(2*i);l++)
{cout<<"*";
 } 
}
else{


for(int r=1;r>=i-(n/2);r++)
{
cout<<"+";
}
}


/*
** i=6 n=8   2
* i=5 n=8 n2=4 1 seul
*** i=7 n=8  3
*/

cout<<endl;
}}
