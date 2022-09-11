#include <iostream>
using namespace std;

class MyClass{
	private:
		int num1;
	public:
		void reset(){
			num1=0;
		}
		void setnum(int x){
			num1=x;
		}
		int display(){
			return num1;
		}
	
};

int main()
{
	MyClass C1;
	int num1;
	
	C1.reset();
	cout<<"Existing Value of x is "<<C1.display()<<endl;
	cout<<"\nEnter New Value: ";
	cin>>num1;
	C1.setnum(num1);
	cout<<"\nNew Value of x is "<<C1.display();
		
return 0;
}

