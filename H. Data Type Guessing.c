#include <iostream>
using namespace std ;
int main ()
{ double a,b,c;
cin>>a>>b>>c;
if(((a*b)/c)-(long long((a*b)/c))!=0)
{
    cout<<"double";

}
else{
    if((sizeof((a*b)/c))==size(long long))
{
    cout<<"long long " ;

}
else
{
    cout<<"int ";
}
}




}
