#include <iostream>

using namespace std;

int main()
{
    short int  t;
    long long x;
    cin>>t;
    for(int i=0;i<t;i+=1)
    { cin>>x;
    if (x==0)
        cout<<0<<" ";
    else
    while(x)
    {
        cout<<x%10<<" ";
            x/=10;
    }

     cout<<endl;
    }
}
