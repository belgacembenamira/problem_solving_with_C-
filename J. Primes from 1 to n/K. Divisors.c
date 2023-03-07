#include <iostream.h>
using namespace std ;
int main ()
{
    int x;
    cin>>x;
    cout<<1<<endl;
    for(int i=2;i<x/2;i++)
    {
        if(x%i==0) cout<<i<<endl;
    }
    cout<<x;
}
