#include <iostream>
using namespace std;
int main()
{
int guests,chairs,total=1;
	cout<<"Enter the number of guests: ";
	cin>>guests;
	cout<<"\nEnter the number of chairs: ";
	cin>>chairs;
	if(guests>chairs){
		for(int i=0; i<chairs; i++){
			total *= guests;
			guests--;}
	}
	cout << "\nNumber of possible arrangements are: " << total << endl;

return 0;
}

