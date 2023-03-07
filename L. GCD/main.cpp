#include <iostream>
using namespace std ;
int main ()
{
    int x,y,z=0,t;
    cin>>x>>y;

    for(int i=1;i<=min(x,y);i++)
    {
        if(x%i==0 and y%i==0) z=i;
    }
    cout<<z;
}
