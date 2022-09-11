//Task # 3
//PF : IF Else Statement
#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"Input first number: ";
	cin>>x;
	cout<<"Input second number: ";
	cin>>y;
	cout<<"Input third number: ";
	cin>>z;
	if(x>y && y>z && x>z){ 
		cout<<"\nDecreasing : "<<x<<" "<<y<<" "<<z<<endl;
	}
	else if(x<y && y<z){
		cout<<"\nIncreasing : "<<x<<" "<<y<<" "<<z<<endl;
	}
	else{
		cout<<"\nNeither Increasing nor Decreasing";
	}
	return 0;
}
