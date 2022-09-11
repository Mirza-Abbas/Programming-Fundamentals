//Q1: Votes Program
#include <iostream>
using namespace std;

class candidate{ 		//Class
	
	private:
		int votes;
	
	public:
		candidate(){  	//Constructor
			votes=0;
		}
		void upvote(){ 		//++Votes
			votes++;
		}
		int display(){ 		//Displays Votes
			return votes;
		}
	};

int main(){			//Main Function

	candidate CA,CB;
	int c1,c2;
	
	do{			//Do Loop
	
		cout<<"Press 1 to vote for Candidate A\n      2 to vote for Candidate B\nYour Choice: ";
		cin>>c1;
	
		if(c1==1){
			CA.upvote();
			cout<<"Vote casted for Candidate A"<<endl;
		}
	
		else if(c1==2){
			CB.upvote();
			cout<<"Vote casted for Candidate B"<<endl;
		}
	
		else{
			cout<<"Invalid Operation"<<endl;
		}
	
		cout<<"\nPress 1 to continue\n      0 to show result\nYour Choice: ";
		cin>>c2;
		cout<<endl;
		
	}while(c2==1); //Do Loop
	
	if(c2==0){  //To Display Winner
		cout<<"Votes for Candidate A: "<<CA.display()<<endl;
		cout<<"Votes for Candidate B: "<<CB.display()<<endl;
		
		if(CA.display()>>CB.display()){		//If Winner A
			cout<<"\nWinner is Candidate A";}
			
		if(CB.display()>>CA.display()){ 	//If Winner B
			cout<<"\nWinner is Candidate B";}
			
		if(CA.display()==CB.display()){ 	//If Tie
			cout<<"\nElection Tied";}
	}
return 0;
}

