/*	lab 7 task 1	*/
#include<iostream>
#include<conio.h>
using namespace std;

void returnhello(string name){
	cout<<"\n\t\tHello "<<name<<" !"<<endl;
}

int main()
{
	string name;
	cout<<"\t\tWhat's your name : ";
	cin>>name;
	returnhello(name);
 	return 0;
}

