#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    for(int i=0;i<x;i+=1)
{
    for(int i=x-1,j=1;i!=0,j<=2*x+1;j+=2,i-=1)
    {
        cout<<" ";
        cout<<"*";
    }

    cout<<endl;
}
}
