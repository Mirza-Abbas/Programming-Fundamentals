/*  lab 7 Task 6*/
#include<iostream>
using namespace std;
void swap1(int a , int b){
	int temp1=a;
	a=b;
	b=temp1;
}
void swap2(int& x , int& y){
	int temp=x;
	x=y;
	y=temp;
}
int main()
{
	int x,y;
	cout<<"\n\t\tEnter two numbers to swap: ";
	cout<<"\n\t\tEnter 1st No.: ";
	cin>>x;
	cout<<"\n\t\tEnter 2nd No.: ";
	cin>>y;
	///passing by value 
	///it will not take actual and same value it make copy of values
	cout<<"\n\t\tPassing by value....\n";
	cout<<"\n\t\tBefore swapping x = "<<x<<" and y = "<<y<<endl;
	swap1(x,y);
	cout<<"\n\t\tAfter swapping x = "<<x<<" and y = "<<y<<endl;
	
	
	
	///passing by refenrece 
	///it will take actual and a=same value do not make copy of values
	cout<<"\n\t\tPassing by reference....\n";
	cout<<"\n\t\tBefore swapping x = "<<x<<" and y = "<<y<<endl;
	swap2(x,y);
	cout<<"\n\t\tAfter swapping x = "<<x<<" and y = "<<y<<endl; 	
	return 0;
}
