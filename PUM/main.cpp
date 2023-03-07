#include <iostream>

using namespace std;

int main()
{
int x;
cin>>x;
for(int i=1;i<=4*x;i+=1)
{
    if(i%4!=0)
  cout<<i<<" ";
  else
    cout<<"PUM"<<endl;
}


    return 0;
}
