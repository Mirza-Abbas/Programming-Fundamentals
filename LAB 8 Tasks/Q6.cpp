#include <iostream>
using namespace std;

int main()
{
	int no,small;
	cout<<"Enter No. of Elements in Array: ";
	cin>>no;
	if(no>=1){
		int arr[no];
		for(int x=0;x<no;x++){
			cout<<"Enter No for Element "<<x+1<<" : ";
			cin>>arr[x];
		}
		small=arr[0];
		for(int x=0;x<no;x++){
			if(arr[x]<small){
				small=arr[x];
			}
		}
		cout<<"\nSmallest No is: "<<small;
	}
	else{
		cout<<"Invalid Number";
	}
return 0;
}

