#include <iostream>

using namespace std;

int main()
{
  long long f;
  int x,n;
  cin>>n;
  for(int i=0;i<n;i+=1)
  {     cin>>x;
       f=1;int j=2;
      for(;j<=x;j++)
      {
          f=f*j;
      }
      cout<<f<<endl;

  }

    }

