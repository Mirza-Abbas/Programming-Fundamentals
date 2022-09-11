#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,x,y;
	char op,slash,choice;
do{
	cout<<"Enter first fraction:";
    cin>>a>>slash>>b;
    cout<<"Enter second fraction:";
    cin>>c>>slash>>d;
    cout<<"Enter operator: ";
	cin>>op;
    switch(op){
        case '+':  x=(a*d)+(b*c);   y=b*d;  break;
        case '-':  x=(a*d)-(b*c);   y=b*d;  break;
        case '*':  x=(a*c);         y=b*d;  break;
        case '/':  x=a*d;           y=b*c;  break;}
        
    cout<<a<<"/"<<b<<op<<c<<"/"<<d<<" = "<<x<<"/"<<y<<endl;
    cout<<"Do you wish to continue (y/n)?"<<endl;
    cin>>choice;
    cout<<endl;
    }while(choice=='y');
return 0;
}

