// Task # 2
#include<iostream>

using namespace std;

int main()
{
	int x,y;
	cout<<"Total No.of Classes: ";
	cin>>x;
	cout<<"Number of Classes attended : ";
	cin>>y;
	float z;
	z=(float)y/x*100;
	cout<<"Percentage : "<<(float)z<<" %"<<endl;
	
	if(z>=75){
		cout<<"You are eligible to sit in Exams.";
	}
	else{
		cout<<"You are not eligible to sit in Exams.";
	}
	
	return 0;
}
