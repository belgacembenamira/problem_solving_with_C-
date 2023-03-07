// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;
int main() {

int a=10;
void * p;
char c='a';

p=&a;
cout<<p<<endl<<&a<<endl<<a<<endl;
//*p=*p+15;
*((int *)(p))+=20;
cout<<*((int * )(p))<<endl;
p=&c;
printf("%x \n",c);
cout<<endl<<&c<<endl<<&p<<endl<<*((char *)(p));
    return 0;
}
