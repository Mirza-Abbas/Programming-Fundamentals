#include <iostream>
using namespace std;
int main()
{
	int a=0; //a=years
	float x,y,z;
	cout<<"Enter initial amount: ";
	cin>>x;
	cout<<"Enter final amount: ";
	cin>>y;
	cout<<"Enter interest rate (percent per year): ";
	cin>>z;
	z/=100;
	
	while (y>=x){
		x+=x*z;
		a++;
	}
	cout<<"At the end of "<<a<<" years you will have "<<x<<" dollars";
return 0;
}

