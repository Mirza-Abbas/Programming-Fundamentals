// Q4: Vowels Array
#include <iostream>
using namespace std;

class vowel{		//Class Vowel
	public:
		char vowels[5];
		
		void setvowel(int a, char x){  // Stores Vowels
			vowels[a]=x;
		}
};

int main()		// Main
{
	char chars[]={"abcdefghijklmnopqrstuvwxyz"},vowels[5],c;
	int a=0;
	vowel v1;
	cout<<"Given Characters are: "<<endl;
	for(int x=0;x<=26;x++){  //Checks and Stores Vowels
		c=chars[x];
		cout<<c;		
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
			v1.setvowel(a,c);
			a++;
		}
	}
	cout<<"\n\nVowels:"<<endl;  // Displays Vowels
	for(int x=0;x<5;x++){
	cout<<v1.vowels[x];
	}
	
return 0;
}

