#include <iostream>

using namespace std;

int main()
{
    short int n ,z=0;
    cin>>n;
    while(z<n)
    { for(int i=0;i<=z;i+=1)
    {
        cout<<"*";
    } cout<<endl;
        z++;
    }
    return 0;
}
