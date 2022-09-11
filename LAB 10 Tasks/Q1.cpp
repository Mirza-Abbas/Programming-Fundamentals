#include <iostream>
using namespace std;

class calculator{
	public:
		float add(float x, float y){
			float res=x+y;
			return res;
		}
		float sub(float x, float y){
			float res=x-y;
			return res;
		}
		
		float multi(float x, float y){
			float res=x*y;
			return res;
		}
		
		float div(float x, float y){
			float res=x/y;
			return res;
		}
};

int main()
{
	int choice;
	do{
		calculator c1;
		float n1,n2;
		char op;
		cout<<"Enter 1st No.: ";
		cin>>n1;
		cout<<"Enter 2nd No.: ";
		cin>>n2;
		cout<<"Enter Operand: ";
		cin>>op;
	
		switch (op){
			case '+':
				cout<<"Result is "<<c1.add(n1,n2)<<endl;break;
			case '-':
				cout<<"Result is "<<c1.sub(n1,n2)<<endl;break;
			case '*':
				cout<<"Result is "<<c1.multi(n1,n2)<<endl;break;
			case '/':
				cout<<"Result is "<<c1.div(n1,n2)<<endl;break;
			default:
				cout<<"Invalid Operator"<<endl;break;
		}
		cout<<"Press 1 to continue or 0 to stop"<<endl;
		cin>>choice;
	}while(choice==1);

return 0;
}

