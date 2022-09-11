#include <iostream>
using namespace std;
int main(){
char ch;
	do{
		char dot;
		int pound1,shilling1,pence1,pound2,shilling2,pence2;
		cout<<"Enter 1st amount: \x9c";
		cin>>pound1>>dot>>shilling1>>dot>>pence1;
		cout<<"Enter 2nd amount: \x9c";
		cin>>pound2>>dot>>shilling2>>dot>>pence2;
		pound1+=pound2;
		shilling1+=shilling2;
		pence1+=pence2;
		if(pence1>11){
			shilling1+=(pence1/12);
			pence1=pence1%12;}
		if(shilling1>19){
			pound1+=(shilling1/20);
			shilling1=shilling1%20;}
		cout<<"Total is \x9c"<<pound1<<"."<<shilling1<<"."<<pence1<<endl; 
		cout<<"Do you want to continue (y/n): ";
		cin>>ch;}
	while(ch=='y');
	cout<<endl;
return 0;}
