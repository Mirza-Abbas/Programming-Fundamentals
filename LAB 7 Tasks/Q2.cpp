/*	lab 7 task 2	*/
#include<iostream>
#include<conio.h>
using namespace std;

string completename(string first, string second){
	string temp;
	temp=first+" "+second;
	cout<<"\n\t\tYour complete name is : "<<temp<<endl;
}

int main()
{
	string first,second;
	
	cout<<"\n\t\tEnter your first name : ";
	cin>>first;
	cout<<"\n\t\tEnter your second name : ";
	cin>>second;
	
	completename(first,second);

 	return 0;
}

