// Task # 4
// Character Checking
#include<iostream>

using namespace std;

int main()
{
	char c;
	cout<<"Enter any character : ";
	cin>>c;
	if(c<=95){
		cout<<"The letter is Upper Case.";
	}
	else{
		cout<<"The letter is Lower Case.";
	}
	return 0;
}