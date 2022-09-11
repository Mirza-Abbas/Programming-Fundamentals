#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int pounds,shillings,pence;
float a;
cout<<"Enter Pound: ";
cin>>pounds;
cout<<"Enter Shilling: ";
cin>>shillings;
cout<<"Enter Pence: ";
cin>>pence;
//Pounds = Pounds + (Shillings/20) + (Pence/20/12);
    a = (float)((shillings*12)+pence)/240;
    pence=a*100;
    cout<<endl;
    if (pence >= 100){
        pounds = pounds + (pence/100);
        pence = pence%100; // Modulus (%) is used to calculate remainder of division
    }  
    cout<<"Decimal Pounds:\x9c"<<pounds<<"."<<pence;
return 0;
}

