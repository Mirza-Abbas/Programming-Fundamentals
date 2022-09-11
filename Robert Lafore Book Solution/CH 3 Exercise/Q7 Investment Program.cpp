#include <iostream>
#include <cmath> //for pow function
using namespace std;
int main()
{
	float x,y,z,i;
	cout<<"Enter initial amount: ";
	cin>>x;
	cout<<"Enter number of years: ";
	cin>>y;
	cout<<"Enter interest rate (percent per year): ";
	cin>>z;
	z/=100;
	cout<<"At the end of "<<y<<" years, you will have "<<x*pow((1+z),y)<<" dollars.\n"<<endl;
	for(i=1;i<=y;i++){
		cout<<"At the end of the "<<i<<" year you have "<<x+(x*z)<<endl;
		x=x+(x*z);
	}
return 0;
}

