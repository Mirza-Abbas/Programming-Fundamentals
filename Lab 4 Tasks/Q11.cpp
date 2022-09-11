// Task # 11
#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter any number : ";
	cin>>x;
	cout<<"\n";
	char c;
	c='+';

	if( (x%2) ==0 ){
		cout<<" "<<x+1;
	} 
	else if( (x%2) !=0){
		cout<<" "<<x*x;
	}
	else if( x==0){
		x+=10;
		cout<<" "<<" "<<x*x*x;
	}
	else{
		cout<<" ";
	}
	return 0;
}