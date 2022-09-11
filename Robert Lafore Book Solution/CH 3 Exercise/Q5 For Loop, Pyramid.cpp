#include <iostream>
using namespace std;
int main()
{
int i,j,k,space=2; //i=no. of rows,j=no. of spaces,k=no. of symbols
for (int i=1;i<=5;i++){
   for (int j=5;j>=i;j--){
   cout<<" ";}
for (int k=1;k<=2*i-1;k++){
   cout<<"x";}
   cout<<endl;
   }
return 0;
}

