// Task # 1
#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter your Age : ";
	cin>>x;
	cout<<"Your Age is "<<x<<endl;
	if(x>=18){
		cout<<"You are eligible to vote.";
	}
	else{
		cout<<"You are not eligible to vote.";
	}
	return 0;
}
