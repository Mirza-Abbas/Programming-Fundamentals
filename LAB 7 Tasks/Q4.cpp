/*  lab 7 Task 4*/
#include<iostream>
using namespace std;

void swap(int& x , int& y){
	int temp=x;
	x=y;
	y=temp;
}
int main()
{
	int x,y;
	cout<<"\n\t\tEnter First Number: ";
	cin>>x;
	cout<<"\n\t\tEnter Second Number: ";
	cin>>y;
	
	cout<<"\n\t\tBefore swapping x = "<<x<<" and y = "<<y<<endl;
	swap(x,y);
	cout<<"\n\t\tAfter swapping x = "<<x<<" and y = "<<y<<endl; 	
	return 0;
}
