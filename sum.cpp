#include<iostream>
using namespace std ;
main()
{
    int a=0,b=0;
    cin>>a>>b;
    while(a!=0 or b!=0 )
    {
        a=a%10;
        b=b%10;
    }
    cout<<a+b;
}
