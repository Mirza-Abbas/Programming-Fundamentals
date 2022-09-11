#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char a,b,c,d,e,f;
    int num;
  
    cout<<"Enter a number: ";
    a=getche();
    b=getche();
    c=getche();
    d=getche();
    e=getche();
    f=getche();
  
    num=(int)a-48;
    num=num*10+((int)b-48);
    num=num*10+((int)c-48);
    num=num*10+((int)d-48);
    num=num*10+((int)e-48);
    num=num*10+((int)f-48);
  
    cout<<endl<<"Number is: "<<num;
    
	
	return 0;
	}
