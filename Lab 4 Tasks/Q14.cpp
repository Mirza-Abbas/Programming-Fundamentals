// Task # 14
#include<iostream>

using namespace std;
int main()
{
	int x;
	long x1,x2,x3,x4,x5;
	x1=10000,x2=20000,x3=30000,x4=40000,x5=50000;
	cout<<"Enter Salary Package : ";
	cin>>x;
	cout<<"\n";
	if(x>=x1 && x<=x2){
		cout<<"Designation : "<<"Manager Operations";
	}
	else if(x>x2 && x<=x3){
		cout<<"Designation : "<<"Manager";
	}
	else if(x>x3 && x<=x4){
		cout<<"Designation : "<<"Area Manager";
	}
	else if(x>x4 && x<=x5){
		cout<<"Designation : "<<"Regional Manager";
	}
	else {
		cout<<"We do not pay "<<x<<" to any one .";
	}
	return 0;
}