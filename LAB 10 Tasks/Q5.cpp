#include <iostream>
using namespace std;

class Student{
	private:
		string name;
		string rollno;
	public:
		static int students;
		Student(){
			students++;
		}
		void setname(string setn){
			name=setn;
		}
		string getname(){
			return name;
		}
		void setroll(string setno){
			rollno=setno;
		}
		string getroll(){
			return rollno;
		}
};

class Course{
	private:
		string coursename;
	public:
		static int courses;
		Course(){
			courses++;
		}
		void setcourse(string setc){
			coursename=setc;
		}
		string getcourse(){
			return coursename;
		}
};

int Student::students=0;
int Course::courses=0;

int main()
{
	string sname,cname,rno;
	int choice;
	do{
		Student s1;
		Course c1;
		cout<<"Enter Student Name: "<<endl;
		cin>>sname;
		cout<<"Enter Student Roll No: "<<endl;
		cin>>rno;
		cout<<"Enter Course Name: "<<endl;
		cin>>cname;
		s1.setname(sname);
		s1.setroll(rno);
		c1.setcourse(cname);
		cout<<endl<<"Name of Student is "<<s1.getname()<<endl;
		cout<<endl<<"Roll No of Student is "<<s1.getroll()<<endl;
		cout<<endl<<"Name of Course is "<<c1.getcourse()<<endl;
		cout<<endl<<"No of Total Students: "<<s1.students<<endl;
		cout<<endl<<"No of Total Courses: "<<c1.courses<<endl;
		cout<<endl<<"Press 1 to continue or 0 to stop"<<endl;
		cin>>choice;
	}while(choice==1);
	

return 0;
}

