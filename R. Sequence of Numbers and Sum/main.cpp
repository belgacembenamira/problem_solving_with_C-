#include <iostream>

using namespace std;

int main()
{
    short int n,m,sum=0;
    cin>>n>>m;
    while (n>0 and m>0 )
    {
         sum=0;
        for(int i=min(n,m);i<=max(n,m);i+=1)
        {
            sum=sum+i;
            cout<<i<<" ";
        }
        cout<<"sum ="<<sum<<endl;
            cin>>n>>m;

    }
    return 0;
}
