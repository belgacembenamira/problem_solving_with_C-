#include <iostream>

using namespace std;

int main()
{
    int n,i=0;
    cin>>n;
    while (i<n)
    {
        for(int j=0;j<i+2 ;j+=1)
    {
        cout<<"*";
    }
    i++;
    cout<<endl;
    }

}
