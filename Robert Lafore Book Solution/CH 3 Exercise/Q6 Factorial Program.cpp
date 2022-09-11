#include <iostream>
using namespace std;
int main()
{int numb = 0;
do{	
	long fact = 1;
	cout << "Enter a number or 0 to exit: ";
	cin >> numb;
	for(int j=numb; j>0; j--)
		fact *= j;
		cout << "Factorial is " << fact << endl;}
	while(numb!=0);
return 0;
}

