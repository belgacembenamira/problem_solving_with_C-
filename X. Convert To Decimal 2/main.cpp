#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,x,a,j=0;
    cin>>n;
    for(int i=0;i<n;i+=1)
    {
        cin>>x;
        a=0,j=0;
        while (x)
        {    if(x%2==1)
        {
            a+=(pow(2,j));
            j+=1;
        }

            x/=2;
        }
        cout<<a<<endl;

    }

}
