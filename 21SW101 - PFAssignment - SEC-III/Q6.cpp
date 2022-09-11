//Q6: Calculate Gross Pay and Net Pay
#include <iostream>
using namespace std;

class emp{		//Employee Class
	public:
		string emp_name;
		string emp_id;
		float basic_salary;
};

class derived:public emp{ 	//Derived Class
	
	private:
		float grosspay,netpay;
	
	public:
		derived(string name,string id,float salary){ //Parameterized Constructor
			emp_name=name;
			emp_id=id;
			basic_salary=salary;
		}
		
		void gross(float per){ 		//Calculates Gross Pay
			grosspay=basic_salary+(basic_salary*(per/100));
		}
		
		float getgross(){		//Displays Gross Pay
			return grosspay;
		}
		
		void net(float per){		//Calculates Net Pay
			netpay=grosspay-(grosspay*(per/100));
		}
		
		float getnet(){			//Displays Gross Pay
			return netpay;
		}
};

int main()			//Main
{
	string name,id;
	float salary,gross_per,net_per;
	int choice;
	
	do{			//Do Loop
		
	cout<<"Enter Name: ";
	cin>>name;
	
	cout<<"Enter Id No: ";
	cin>>id;
	
	cout<<"Enter Salary: ";
	cin>>salary;
	
	derived E1(name,id,salary);
	
	cout<<"Enter Allowance Percentage to calculate gross pay: %";
	cin>>gross_per;
	
	E1.gross(gross_per);
	cout<<E1.getgross()<<endl;
	
	cout<<"Enter Tax Percentage to calculate Net pay: %";
	cin>>net_per;
	
	E1.net(net_per);
	cout<<E1.getnet()<<endl;
	
	cout<<"Press 1 to continue or 0 to stop"<<endl;
	cin>>choice;
	
	}while(choice==1);  	//Do Loop
	
return 0;
}

