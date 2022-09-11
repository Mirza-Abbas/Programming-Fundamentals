#include <iostream>
using namespace std;

class Employee{
	private:
		int num;
		float sal;
	public:
		void setnum(int x){
			num=x;
		}
		int getnum(){
			return num;
		}
		void setsal(int x){
			sal=x;
		}
		float getsal(){
			return sal;
		}
};

int main()
{
	Employee E1, E2, E3;
	int num[3];
	int sal[3];
	for(int x=1;x<=3;x++){
		cout<<"Enter Employee's Number: ";
		cin>>num[x];
		E1.setnum(num[x]);
		cout<<"\nEnter Employee's Salary: ";
		cin>>sal[x];
		E1.setsal(sal[x]);
		cout<<"\nNumber of Employee is "<<E1.getnum()<<endl;
		cout<<"\nSalary of Employee is "<<E1.getsal()<<endl<<endl;
	}


return 0;
}

