#include <iostream>
using namespace std;
int main(){
char ch;	
	do{
		char dot,op;
		int pounds1,shillings1,pence1,pounds2,shillings2,pence2;
		cout<<"Enter first amount: \x9c";
		cin>>pounds1>>dot>>shillings1>>dot>>pence1;
		cout<<"Enter second amount: \x9c";
		cin>>pounds2>>dot>>shillings2>>dot>>pence2;
		cout<<"Operation +, -, *: ";
		cin>>op;
		switch(op){
			case'+':
				pounds1+=pounds2;
				shillings1+=shillings2;
				pence1+=pence2; break;
			case'-':
				pounds1-=pounds2;
				shillings1-=shillings2;
				pence1-=pence2; break;
			case'*':
				pounds1*=pounds2;
				shillings1*=shillings2;
				pence1*=pence2; break;	
			default: cout<<"Invalid option"<<endl; break;}
			
		if(pence1>11){
			shillings1+=(pence1/12);
			pence1=pence1%12;}
			
		if(shillings1>19){
			pounds1+=(shillings1/20);
			shillings1=shillings1%20;}
			
		cout<<"Amount after performing "<<op<<" is \x9c"<<pounds1<<"."<<shillings1<<"."<<pence1;
		cout<<endl<<"Do you want to continue (y/n): ";
		cin>>ch;
	}while(ch=='y');
return 0;
}
