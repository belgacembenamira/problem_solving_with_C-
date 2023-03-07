#include<bits/stdc++.h>
using namespace std ;
int main ()
{ double a,b,c;
cin>>a>>b>>c;
 double r=(a*b)/c;
if(log(r)>=log(-2147483648) and log (r)<=log(-2147483648))
    cout<<"+int" ;
else
{
    if(r-long long ((a*b)/c)==0)
        cout<<""long long "";
    else
        cout<<""double"" ;
}

return 0;



}

