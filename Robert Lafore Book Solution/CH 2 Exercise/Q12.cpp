#include <iostream>
using namespace std;
int main()
{
int pounds,shillings,pence;
float decPounds,fracPounds,decShillings,fracShillings;
/*float decpounds;                    input from user (new-style pounds)
  int pounds,shillings,pence;         old-style (integer) pounds,shillings,pence
  float fracPounds,fracshillings;     decimal fraction (smaller than 1.0) */
cout<<"Enter Decimal pounds: \x9c";
cin>>decPounds;

pounds=static_cast<int>(decPounds); //static_cast<int> to convert from float to int
fracPounds=decPounds-pounds;
decShillings=fracPounds*20;
shillings=static_cast<int>(decShillings);
fracShillings=decShillings-shillings;
pence=static_cast<int>(fracShillings*12);
cout<<"Equivalent in old notation: \x9c"<<pounds<<"."<<shillings<<"."<<pence;
cout<<endl;
return 0;
}

