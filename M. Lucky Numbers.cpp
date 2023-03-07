#include<bits/stdc++.h>
using namespace std ;
int main ()
{
 int x,y,z,k;
int a=0;
 cin>>x>>y;
 for(int i=min(x,y);i<=max(x,y);i+=1)
{ z=i,k=i; a=1;
  while(k!=0 )   {
    if(k%10==4 or  k%10==7 )
    {    a+=1;  }
    else{  a=0;
        break;  } 	
       k/=10; }		
       if(a>0) {cout<<z<<" "; 
       }
}
if(a)
{
	cout<<-1;	

}
return 0;
}


    
		
