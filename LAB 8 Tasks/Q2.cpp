#include <iostream>
using namespace std;

int main(){
	int arr[5]={5,10,15,20,25},x;
	
	cout<<"Elements of Array Are: "<<endl; 
	for(x=0;x<5;x++){
		cout<<arr[x]<<endl;
	}
	cout<<"\nElements of Array in Reverse Order: "<<endl;
	for(x=4;x>=0;x--){
		cout<<arr[x]<<endl;
	} 

return 0;
}

