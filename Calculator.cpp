#include<iostream>
using namespace std ;
int main()
{ char s;
long long  a,b;
cin>>a>>s>>b;
switch(s) {
  case '+':
    cout<<a+b;
    break;
  case '-':
    cout<<a-b;
    break;
    case '*':
    cout<<a*b;
    break;
  default:
   cout<<a/b ;
}
	return 0;
	
}
//50/10 
