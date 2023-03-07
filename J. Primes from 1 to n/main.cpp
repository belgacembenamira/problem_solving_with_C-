#include <iostream>

using namespace std;

int main()
{
short int x,a=1;
cin>>x;
if(x==2)
{
    cout<<2;
    return 0;
}

for(int i=2;i<=x;i++)
{  a=1;
    for(int j=2;j<i;j++)
{
    if(i%j==0)
    {
        a=0;
    }

}
if(a) cout<<i<<" ";
}

    return 0;
}
