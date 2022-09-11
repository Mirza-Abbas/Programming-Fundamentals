// Q7: Consonants Array
#include <iostream>
using namespace std;

class consonant{  // Class Cnsonant
	public:
		char consonants[21];
		void setconsonants(int a, char x){  // Stores Consonants
			consonants[a]=x;
		}
};

int main()		// Main
{
	char chars[]={"abcdefghijklmnopqrstuvwxyz"},arrconsonents[21],c;
	int a=0;
	consonant C1;
	
	cout<<"Given Characters are: "<<endl;
	
	for(int x=0;x<=26;x++){    		// Checks and Stores Consonants
		c=chars[x];
		cout<<c;		
		if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'){
			C1.setconsonants(a,c);
			a++;
		}
	}
	
	cout<<"\n\nConsonents:"<<endl;
	
	for(int x=0;x<21;x++){		// Displays Consonants
	cout<<C1.consonants[x];
	}
return 0;
}

