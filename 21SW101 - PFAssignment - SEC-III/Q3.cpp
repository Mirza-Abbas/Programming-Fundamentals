//Q3: Space Key Square Program

#include <iostream> 
#include <conio.h>  	//for getch
using namespace std;

class space{  		//class
	public:
		int square(int x){ //member function
			return (x*x);
		}
};

int main(){ 			//Main Function
	space S;
	char key; 
	int sq,choice;
	do{
		cout<<"Enter a Number: ";
		cin>>sq;
		sq=S.square(sq);
		cout<<"Enter Space Key To Get Result "<<endl;
		key=getch();
		if(key==' '){
			cout<<"The Result is "<<sq<<endl;
		}
		else{
			cout<<"Invalid Character"<<endl;
		}
		cout<<"Press 1 to continue or 0 to stop "<<endl;
		cin>>choice;
	}while(choice==1);

return 0;
}

