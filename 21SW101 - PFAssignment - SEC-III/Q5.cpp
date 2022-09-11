//Q5: Student's Information Structure
#include <iostream>
using namespace std;

int main(){ 		//Main
	
	int no,choice;
	
	struct student{			//Structure student
		string name,rollno;
		char grade;
	};
	
	do{			//Do Loop
	
		cout<<"Enter No of Students: ";
		cin>>no;
		
		student s[no];
		
		for(int x=0;x<no;x++){ 	    //Loop To Get Information
		
			cout<<"\nStudent No."<<x+1<<endl;
			cout<<"Enter Student's Name: ";
			cin>>s[x].name;
			cout<<"Enter Student's Roll No: ";
			cin>>s[x].rollno;
			cout<<"Enter Student's Grade: ";
			cin>>s[x].grade;}
			
		cout<<endl;
		cout.width(50);
		cout.setf(ios::right);
		cout.fill('-');
		cout<<"\n\n   ***** OUTPUT *****";
		for(int x=0;x<no;x++){   //Loop To Display Information
			
			cout<<"\n\nInformation Of Student No."<<x+1<<endl;
			cout<<"Student's Name is "<<s[x].name<<endl;
			cout<<"Student's Roll No. is "<<s[x].rollno<<endl;
			cout<<"Student's Grade is "<<s[x].grade<<endl;}
		
		cout<<"\nPress 1 to Continue or 0 to Stop";
		cin>>choice;  //Confirmation
		
	}while(choice==1); //Do Loop

return 0;
}
