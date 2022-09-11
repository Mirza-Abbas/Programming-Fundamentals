/*	lab 7 Task 5	*/
#include<iostream>
#include<conio.h>

using namespace std;
int max_two(int& x , int& y){
	if(x>y){
		cout<<"\nMaximum No is "<<x<<endl;
		return x;
	}
	else{
		cout<<"\nMaximum No is "<<y<<endl;
		return y;
	}
}
int main()
{
	int x,y;
	cout<<"\nEnter two numbers to check max:"<<endl;
	cout<<"\nEnter 1st No: ";
	cin>>x;
	cout<<"\nEnter 2nd No: ";
	cin>>y;
	
	max_two(x,y);

	return 0;
}
