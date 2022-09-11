#include <iostream>
#include <stdlib.h>
using namespace std;

class Obj{
	public:
		static int serial;
		Obj(){
			serial++;
			cout<<"Serial Number of Object is "<<serial<<endl;
		}
};

int Obj::serial=0;

int main()
{
	Obj O1,O2,O3;

return 0;
}

