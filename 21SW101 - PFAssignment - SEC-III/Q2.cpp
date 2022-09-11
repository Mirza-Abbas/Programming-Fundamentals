//Q2: Employee Details
#include <iostream>
#include <fstream>
using namespace std;

int main(){	 		//Main
	string id,name,address,dept;
	long long phone;
	int age,choice;
	
	do{			//Do Loop
		
		cout<<"\nEnter Employee's Id: "; //Details
		cin>>id;
		
		cout<<"Enter Employee's Name: ";
		cin>>name;
		
		cout<<"Enter Employee's Address: ";
		cin>>address;
		
		cout<<"Choose Department:\n\t-Admin\n\t-Sales\n\t-Production\n\t-IT ";
		cout<<endl<<"Your Choice: ";
		cin>>dept;
		
		if(dept!="Admin"&&dept!="Sales"&&dept!="Production"&&dept!="IT"){
			cout<<"Invalid Department";
		
			goto label; 		//Goto Label
		}
		
		cout<<"Enter Employee's Phone: ";
		cin>>phone;
		
		cout<<"Enter Employee's Age: ";
		cin>>age;
		
		if(dept == "Admin"){ 		//If Conditions
			ofstream Admin("Adm.txt",ios::app);
			Admin<<"Emp Id "<<id<<"\nEmp Name "<<name<<"\nEmp Address "<<address
			<<"\nEmp Dept "<<dept<<"\nEmp Phone "<<phone<<"\nEmp Age "<<age;
			cout<<"Admin.txt File Created"<<endl;
			Admin.close();
		}
		
		else if(dept == "Sales"){
			ofstream Sales("Sal.txt",ios::app);
			Sales<<"Emp Id "<<id<<"\nEmp Name "<<name<<"\nEmp Address "<<address
			<<"\nEmp Dept "<<dept<<"\nEmp Phone "<<phone<<"\nEmp Age "<<age;
			cout<<"Sales.txt File Created"<<endl;
			Sales.close();
		}
		
		else if(dept == "Production"){
			ofstream Production("Pro.txt",ios::app);
			Production<<"Emp Id "<<id<<"\nEmp Name "<<name<<"\nEmp Address "<<address
			<<"\nEmp Dept "<<dept<<"\nEmp Phone "<<phone<<"\nEmp Age "<<age;
			cout<<"Production.txt File Created"<<endl;
			Production.close();
		}
		
		else if(dept == "IT"){
			ofstream IT("IT.txt",ios::app);
			IT<<"Emp Id "<<id<<"\nEmp Name "<<name<<"\nEmp Address "<<address
			<<"\nEmp Dept "<<dept<<"\nEmp Phone "<<phone<<"\nEmp Age "<<age;
			cout<<"IT.txt File Created"<<endl;
			IT.close();
		}
	
		{ofstream emp("emp.txt");  //Employee File
		emp<<"Emp Id "<<id<<"\nEmp Name "<<name<<"\nEmp Address "<<address
		<<"\nEmp Dept "<<dept<<"\nEmp Phone "<<phone<<"\nEmp Age "<<age;
		cout<<"Information Stored in emp.txt"<<endl;}
		
		label: 			//Label
			
		cout<<"Press 1 to Contiue or 0 to stop"<<endl;
		cin>>choice;  
		
	}while(choice==1); //Loop

return 0;
}

