#include <iostream>
using namespace std;

int main()
{
	int arr[5],a=0,sum=0;
	
	cout<<"Elements of Array Are: "<<endl; 
	for(int x=5;x<=25;x+=5){
		arr[a]=x;
		cout<<arr[a]<<endl;
		a++;
	}
	for(int a=0;a<5;a++){
		sum+=arr[a];
	}
	cout<<"\nSum is "<<sum;

return 0;
}

