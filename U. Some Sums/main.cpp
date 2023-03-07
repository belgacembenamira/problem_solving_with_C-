#include <iostream>

using namespace std;

int main()
{
int n,a,b,x,s=0,r=0;
cin>>n>>a>>b;
for(int i=1;i<=n;i+=1)

{

    { x=i; r=0;
        while (x)
        {     r+=(x%10);
            x/=10;
        }
    }
    for(int j=a;j<=b;j++)
    {
        if(r==j)
       {s+=i;
     break;
      }
    }


    } cout<<s;



    return 0;
}
