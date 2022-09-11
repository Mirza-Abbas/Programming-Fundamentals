// Task # 15
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int x,y,z;			
	int obtained,total;	
	total=300;										//declaring total marks
	
	cout<<"Total Marks : "<<total<<endl;
	cout<<"Marks in each subject : "<<100<<endl;
	cout<<"\nMarks is C++ : ";
	cin>>x;
	cout<<"\nMarks in Functional English : ";
	cin>>y;
	cout<<"\nMarks in Electrical Engineering : ";
	cin>>z;
	
	obtained=x+y+z;									//adding marks 
	float per;										//calculating percentage
	per=(float)obtained/total*100;					//percentage
	cout<<"\nPercentage : "<<(float)per<<endl;
	
	char a,b,c,d;								//declaring character for grades
	a='A',b='B',c='C',d='D';
	string f;
	f='Fail';									//declaring string for fail
	if(per>90){
		cout<<"Grade : "<<a;						// A grade
	}
	else if(per>=80 && per<=90){
		cout<<"Grade : "<<'B';						// B grade
	}
	else if(per<=79 && per>=70){
		cout<<"Grade : "<<'C';						// C grade
	}
	else if(per<=69 && per>=60){
		cout<<"Grade : "<<'D';						// D grade
	}
	else{
		cout<<"Grade : "<<" \"FAIL\" "<<endl;					// fail
	}
	cout<<"\t\n\tThanks.";

	return 0;
}