/*		Lab 9 task 2	*/
#include<iostream>
#include<conio.h>
using namespace std;

struct student{
	int obt_marks;
	int total_marks;

};

int main()
{
	student ali;
	float per;
	cout<<"\n\t\tEnter total marks : ";
	cin>>ali.total_marks;
	cout<<"\n\t\tEnter obtained marks : ";
	cin>>ali.obt_marks;
	per=(float) (ali.obt_marks * 100 / ali.total_marks ) ;
	cout<<"\n\n\t\tPercentage is : "<<(float)per<<" % "<<endl;


 	return 0;
}

