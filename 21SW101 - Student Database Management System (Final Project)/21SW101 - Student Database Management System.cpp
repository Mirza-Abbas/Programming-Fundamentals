//				    ***** STUDENT DATABASE MANAGEMENT SYSTEM *****

//						By: Mirza Muhammad Abbas
// 					 	Roll No. : 21SW101
// 					    Subject Programming Fundamentals (PR)
// 						Submitted To: Sir Sajjad Ali 

#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

class student {		// CLASS STUDENT
	private:
    	string  first_name,  last_name,  idnum,  section,  email,  contact,  address;
	public:
    	void menu(){		//	MAIN MENU FUNCTION
		    int choice;
		    char x;
		    do{   		// DO LOOP
		    	system("cls");
			    cout <<	 "\n\t\t***** STUDENT DATABASE MANAGEMENT SYSTEM *****" <<endl;
			    cout <<	 "\n\n\t\t\t 1. Enter New Record"			   			<<endl;
			    cout <<	 "\n\t\t\t 2. Display Records"    			   			<<endl;
			    cout <<	 "\n\t\t\t 3. Modify Record"     		       			<<endl;
			    cout <<	 "\n\t\t\t 4. Search Record"     	   	       			<<endl;
			    cout <<	 "\n\t\t\t 5. Delete Record"     			   			<<endl;
			    cout <<	 "\n\t\t\t 6. Exit"						       			<<endl;
				cout <<	 "\n\n\t\t\t Enter Your Choice: ";
			    cin  >>  choice;
				if( choice == 1 ){
			        do{
			            insert();
			            cout  <<  "\n\n\t\t\t Do You Want To Continue? (Y,N): "  ;
			            cin   >>x;
			        }while( x == 'y' || x == 'Y' );
			        choice=0;
				}
			    if( choice == 2 ){
			        display();
			        cout  <<  "\n\n\t\t\t Press Any Key to Continue "  ;
			        x=getch();
			        choice=0;
				}
			    if( choice == 3 ){
			        do{
			            modify();
			            cout  <<  "\n\n\t\t\t Do You Want To Continue? (Y,N): "  ;
			            cin   >>  x;
			        } while( x == 'y' || x == 'Y' );
			        choice=0;
				}
				if( choice == 4 ){
			        do{
			            search();
			            cout  <<  "\n\n\t\t\t Do You Want To Continue? (Y,N): "  ;
			            cin   >>  x;
			        }while( x == 'y' || x == 'Y' );
			        choice=0;
				}
			    if( choice == 5 ){
			        do{
			            deleted();
			            cout  <<  "\n\n\t\t\t Do You Want To Continue? (Y,N): "  ;
			            cin   >>  x;
			        }while( x == 'y' || x == 'Y' );
			        choice=0;
				}
			}while( choice != 6);
			cout<<"\n\n\t\t     THANK YOU FOR USING THIS SOFTWARE";
		}
    	void insert(){ 		// OPTION 1: ENTER NEW RECORD
		    system("cls");
		    fstream file;
		    cout  <<  "\n\t\t\t Enter First Name: "  ;
		    cin   >>  first_name;
		    cout  <<  "\t\t\t Enter Last Name: "     ;
		    cin   >>  last_name;
		    cout  <<  "\t\t\t Enter ID Number: "     ;
		    cin   >>  idnum;
		    cout  <<  "\t\t\t Enter Section: "       ;
		    cin   >>  section;
		    cout  <<  "\t\t\t Enter Email: "         ;
		    cin   >>  email;
		    cout  <<  "\t\t\t Enter Contact: "       ;
		    cin   >>  contact;
		    cout  <<  "\t\t\t Enter Address: "       ;
		    cin   >>  address;
			file.open( "StudentsRecord.txt" , ios::app | ios::out );
		    file<<" "<<first_name<<" "<<last_name<<" "<<idnum<<" "<<section<<" "<<email<<" "<<contact<<" "<<address<<"\n";
		    file.close();
		}
    	void display(){ 	// OPTION 2: DISPLAY RECORDS
		    system("cls");
		    fstream file;
		    int total=0;
		    file.open( "StudentsRecord.txt" , ios::in );
		    if( !file ){
		        cout  <<  "\n\t\t\t No Data Is Present..."  ;
		        file.close();
		    }
		    else{
		        file>>first_name>>last_name>>idnum>>section>>email>>contact>>address;
		        while( !file.eof() ){
		            cout  <<  "\n\n\t\t\t Student No.: "  <<++total		<<endl;
		            cout  <<  "\t\t\t First Name: "       <<first_name  <<endl;
		            cout  <<  "\t\t\t Last Name: "		  <<last_name   <<endl;
		            cout  <<  "\t\t\t ID Number: "		  <<idnum		<<endl;
		            cout  <<  "\t\t\t Section: "		  <<section		<<endl;
		            cout  <<  "\t\t\t Email: "			  <<email		<<endl;
		            cout  <<  "\t\t\t Contact: "		  <<contact		<<endl;
		            cout  <<  "\t\t\t Address: "		  <<address		<<endl;
		            file>>first_name>>last_name>>idnum>>section>>email>>contact>>address;
		        }
		        if( total==0 ){
		            cout << "\n\t\t\t No Data Is Present..."  ;
		        }
		    }
		    file.close();
		}
    	void modify(){ 		// OPTION 3: MODIFY RECORD
		    system("cls");
		    fstream file,file1;
		    string rollno;
		    int found=0;
			file.open( "StudentsRecord.txt" , ios::in );
		    if ( !file ){
		        cout  <<  "\n\t\t\t No Data is Present.."  ;
		    }
		    else{
		        cout  <<  "\nEnter ID Number: "  ;
		        cin   >>  rollno;
		        file1.open( "record.txt" , ios::app | ios:: out );
		        file>>first_name>>last_name>>idnum>>section>>email>>contact>>address;
		        while( !file.eof() ){
		            if( rollno != idnum ){
						file1<<" "<<first_name<<" "<<last_name<<" "<<idnum<<" "<<section<<" "<<email<<" "<<contact<<" "<<address<<"\n";
		            }
					else{
						found++;
						cout  <<  "\n\t\t\t Enter New Details:"  ;
		                cout  <<  "\n\t\t\t Enter First Name: "  ;
		                cin   >>  first_name;
		                cout  <<  "\t\t\t Enter Last Name: "     ;
		                cin   >>  last_name;
		                cout  <<  "\t\t\t Enter ID Number: "     ;
		                cin   >>  idnum;
		                cout  <<  "\t\t\t Enter Section: "       ; 
		                cin   >>  section;
		                cout  <<  "\t\t\t Enter Email: "         ;
		                cin   >>  email;
						cout  <<  "\t\t\t Enter Contact: "       ;
		                cin   >>  contact;
						cout  <<  "\t\t\t Enter Address: "       ;
		                cin   >>  address;
		                file1<<" "<<first_name<<" "<<last_name<<" "<<idnum<<" "<<section<<" "<<email<<" "<<contact<<" "<<address<<"\n";
		            	cout  <<  "\n\t\t\t Record Updated Successfully"  ;
					}
		            file>>first_name>>last_name>>idnum>>section>>email>>contact>>address;
		        }
		        if( found == 0 ){
		                cout  <<  "\n\n\t\t\t Student ID Number Not Found...."  ;
		        }
		        file1.close();
		        file.close();
		        remove( "StudentsRecord.txt" );
		        rename( "record.txt" , "StudentsRecord.txt" );
		    }
		}
    	void search(){ 		// OPTION 4: SEARCH RECORD
		    system("cls");
		    fstream file;
		    int found=0;
		    file.open( "StudentsRecord.txt" , ios::in );
		    if( !file ){
				cout  <<  "\n\t\t\t No Data Is Present..."  ;
		    }
		    else{
		        string rollno;
		        cout  <<  "\n Enter ID Number: "  ;
		        cin   >>  rollno;
		        cout  <<  endl;
		        file>>first_name>>last_name>>idnum>>section>>email>>contact>>address;
		        while( !file.eof() ){
		            if( rollno == idnum ){
		                cout  <<  "\t\t\t First Name: "  <<first_name  <<endl;
		            	cout  <<  "\t\t\t Last Name: "   <<last_name   <<endl;
		            	cout  <<  "\t\t\t ID Number: "   <<idnum       <<endl;
		            	cout  <<  "\t\t\t Section: "     <<section	   <<endl;
		            	cout  <<  "\t\t\t Email: "       <<email	   <<endl;
		            	cout  <<  "\t\t\t Contact: "     <<contact	   <<endl;
		            	cout  <<  "\t\t\t Address: "     <<address	   <<endl;
		                found++;
		            }
		            file>>first_name>>last_name>>idnum>>section>>email>>contact>>address;
		        }
		        if( found==0 ){
		            cout  <<  "\n\t\t\t Student ID Number Not Found..."  ;
		        }
		        file.close();
		    }
		}
    	void deleted(){		// OPTION 5: DELETE RECCORD
		    system("cls");
		    fstream file,file1;
		    int found=0;
		    string roll;
			file.open( "StudentsRecord.txt" , ios::in );
		    if( !file ){
		        cout  <<  "\n\t\t\t No Data is Present.."  ;
		        file.close();
		    }
		    else{
		        cout  <<  "\nEnter ID Number: "  ;
		        cin   >>  roll;
		        file1.open( "record.txt" , ios::app | ios::out );
		        file>>first_name>>last_name>>idnum>>section>>email>>contact>>address;
		        while( !file.eof() ){
		            if ( roll != idnum ){
		                file1<<" "<<first_name<<" "<<last_name<<" "<<idnum<<" "<<section<<" "<<email<<" "<<contact<<" "<<address<<"\n";
		            }
		            else{
		                found++;
		                cout  <<  "\n\t\t\t Record Deleted Successfully"  ;
		            }
		            file>>first_name>>last_name>>idnum>>section>>email>>contact>>address;
		        }
		        if( found == 0 ){
		            cout<<"\n\t\t\t Student ID Number Not Found....";
		        }
		        file1.close();
		        file.close();
		        remove( "StudentsRecord.txt" );
		        rename( "record.txt" , "StudentsRecord.txt" );
		    }
		}
};
int main(){
    student project;
    project.menu();
    return 0;
}          
