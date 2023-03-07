#include<iostream>

using namespace std  ;
int fb(int x)
{     int i=0;
    if(x==1 )
{
    cout<<1;
    return 0;
}
else if (x==2)
{    cout <<1<<" "<<1<<" ";
}
  else
  {
       while(x--)
{       int k=0;
        i=i+k;
        k++;
         cout<<i<<" ";
         x--;
}

  }


}
int main()
{

int x;
cin>>x;


    fb(x);




return 0;
}
