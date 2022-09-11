/*	lab 7 Task 3		*/
#include<iostream>
#include<conio.h>

using namespace std;
void zerosmaller(int& x , int& y){
	if(x<y){
		x=0;
	}
	else{
		y=0;
	}
}

int main()
{
	int x,y;
	cout<<"\n\t\tEnter two numbers to assign least one to zero : ";
	cin>>x>>y;
	
	cout<<"\t\tBefore assigning to zero x = "<<x<<" and y = "<<y<<endl;
	
	zerosmaller(x,y);
	cout<<"\n\t\tAfter assigning to zero x = "<<x<<" and y = "<<y<<endl; 





 	return 0;
}

