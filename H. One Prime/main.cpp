#include <iostream>

using namespace std;

int main()
{
    int x,a=1;
    cin>>x;
    if(x==1)
    {
        cout<<"NO";
        return 0;
    }
    for(int i=2;i<(x/2);i++)
    { if(x%i==0)
     {
        cout<<"NO";
           return 0;
    }

    }
    cout<<"YES";
    return 0;
}
