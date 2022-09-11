#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char x='.';
	char y=' ';
cout<<setiosflags(ios::left)<<setw(12)<<"Last Name"<<setw(14)<<"First Name"
<<setw(20)<<"Street Address"<<setw(14)<<"Town"<<setw(12)<<"State"<<endl;

cout<<setfill(x)<<setw(65)<<"."<<endl;

cout<<setfill(y)<<setw(12)<<"Jones"<<setw(14)<<"Bernard"<<setw(20)<<
"109 Pine Lane"<<setw(14)<<"Little Town"<<setw(12)<<"MI"<<endl;

cout<<setfill(y)<<setw(12)<<"Wong"<<setw(14)<<"Harry"<<setw(20)<<
"121-A Alabama ST."<<setw(14)<<"LakeVille"<<setw(12)<<"IL";
return 0;
}

