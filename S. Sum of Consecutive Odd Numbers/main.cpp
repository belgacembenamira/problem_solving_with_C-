#include <iostream>

using namespace std;

int main()
{
    int x,y ,s=0,n;
    cin>>n;

    while (n--)
    {  cin>>x>>y;
       s=0;
        for (int i=min(x,y)+1;i<max(x,y);i+=1)
        {
            if(i%2!=0)
            {
                s+=i;
            }
        } cout<<s<<endl;
    }

}
