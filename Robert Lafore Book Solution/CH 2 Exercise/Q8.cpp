#include <iostream>
#include <iomanip> //for setw (Set Width)
using namespace std;
int main()
{
int x=12,y=24,z=36;
char a='.';
cout<<setw(8)<<setfill(a)<<"Location"<<setw(15)<<"Population"<<endl 
<<setw(8)<<"Portcity"<<setw(15)<<x<<endl  // setfill fills unused field width
<<setw(8)<<"Hightown"<<setw(15)<<y<<endl  // with a specific character
<<setw(8)<<"Lowville"<<setw(15)<<z;
}

