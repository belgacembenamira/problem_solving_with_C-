#include<iostream>
#include<math.h>

using namespace std ;
main ()
{
	long long x,y;
	cin>>x>>y;
	cout<<"floor "<<x<<"/"<<y<<" = "<<floor(float (x)/float (y))<<endl;
	//floor ==valeur plus grand  < ou egale a numbre
		cout<<"ceil "<<x<<"/"<<y<<" = "<<ceil(float (x)/float (y))<<endl;
			//fceil==valeur plus grand  > ou egale a numbre

			cout<<"round "<<x<<"/"<<y<<" = "<<round(float (x)/float (y))<<endl;
			//arroundisement 


}
