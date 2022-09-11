// Task # 9
#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"Input the 1st Number :";
	cin>>x;
	cout<<"Input the 2nd Number :";
	cin>>y;
	cout<<"Input the 3rd Number :";
	cin>>z;
	if(x>y && x>z){
		cout<<"The greatest : "<<x<<endl;
	}
	else if(y>x && y>z){
		cout<<"The greatest : "<<y<<endl;
	}
	else if(z>y && z>x){
		cout<<"The greatest : "<<z<<endl;
	}
	else{
		cout<<"No Greater Number";
	}
	
	return 0;
}
