//Task # 12

#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"Enter any alphabet : ";
	cin>>c;
	cout<<"\n";
	
	switch(c){
		case'a':cout<<"\tVowel";break;
		case'e':cout<<"\tVowel";break;
		case'i':cout<<"\tVowel";break;
		case'o':cout<<"\tVowel";break;		
		case'u':cout<<"\tVowel";break;
		case'A':cout<<"\tVowel";break;
		case'E':cout<<"\tVowel";break;
		case'I':cout<<"\tVowel";break;		
		case'O':cout<<"\tVowel";break;
		case'U':cout<<"\tVowel";break;
		default:cout<<"\tConsonent.";
	}
		
	return 0;
}
