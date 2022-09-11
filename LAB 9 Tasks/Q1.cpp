/*	lab 9 task 1		*/
#include<iostream>
#include<conio.h>
using namespace std;

struct employee{
	int emp_id;
	float emp_salary;
};

int main()
{
	employee e1;
	
		cout<<"\n\nEnter ID of employee : ";
		cin>>e1.emp_id;
		cout<<"\nEnter Salary of employee : ";
		cin>>e1.emp_salary;
	
		cout<<"\nI.D of employee : "<<e1.emp_id<<endl;	
		cout<<"\nSalary of employee : "<<e1.emp_salary<<endl;	
	return 0;
}
