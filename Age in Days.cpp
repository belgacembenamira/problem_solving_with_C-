#include<iostream>
using namespace std ;
int main()
{ long int x;
cin>>x;
cout<<x/365<<" years\n";
cout<<(x%365)/30<<" months\n";
cout<<(x%365)%30<<" days\n";
	return 0;
}


/* 400 /356 */
