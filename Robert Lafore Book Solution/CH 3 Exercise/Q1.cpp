#include <iostream>
using namespace std;
int main()
{
	int x,y,z,a=1;
	
	cout<<"Enter a Number: ";
	cin>>z;
	
	for (x=1;x<=5;x++){
	
		for (y=1;y<=5;y++){
			cout<<z*a<<"\t";
			a++;}
	
	cout<<endl;}

return 0;
}

