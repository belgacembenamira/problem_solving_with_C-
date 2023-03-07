#include <bits/stdc++.h>

using namespace std  ;
int fb(int x)
{    while(x>0)
{
         x=x-1+x-2;
         cout<<x<<" ";
}

}
int main{

int x;
cin>>x;
if(x==1 )
{
    cout<<1;
    return 0;
}
else if (x==2)
{    cout <<1<<" "<<1<<" ";
}
else
{
    fb(x);
}



return 0;
}
