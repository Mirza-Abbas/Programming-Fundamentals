#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
	char x;
	islower x; // it checks if ch is lowercase or note
	cout<<"Enter a Letter: "; 
	cin>>x;
	cout<<islower(x); /* or islower(x);
	                  cout<<x; */
	return 0;
}

