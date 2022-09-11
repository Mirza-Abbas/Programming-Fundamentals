#include <iostream> 
using namespace std;
int main(){
	int x,y;  float z;
 	cout<<"Type 1 to convert Fahrenheit to Celsius"<<endl;
 	cout<<"     2 to convert Celsius to Fahrenheit ";
 	cin>>x;
 	if(x==1){
 		cout<<"\nEnter Temperature in Fahrenheit: ";
 		cin>>y;
 		z=float (y-32)*5/9;
 		cout<<"\nIn Celsius That's "<<z;}
 	
	 if(x==2){
 		cout<<"\nEnter Temperature In Celsius: ";
 		cin>>y;
 		z=float (y*1.8)+32;
 		cout<<"\nIn Fahrenheit That's "<<z;}
 
 	if(x!=1 && x!=2){
 		cout<<"\n\tThe End";}
return 0;
}

