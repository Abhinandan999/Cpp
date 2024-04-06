#include<iostream>
#include<iomanip>
using namespace std;

class Person{
	public:
		string phone;
	    string email;
		string name;
	    
	public:
		void getdata(){
			
			cout<<"Enter the name:"<<endl;
			cin>>name;
		
			cout<<"Enter the email:"<<endl;
			cin>>email;
			cout<<"Enter the phone number:"<<endl;
			cin>>phone;
			
		}
};
class Student:public Person{
	public:
		string roll_no;
	public:
	
		    void get()
			{
			cout<<"Enter the Roll number:"<<endl;
			cin>>roll_no;
		    }		
		
		     void display()
			 {
			 	cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^STUDENT DATA^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
			 cout<<"student:"<<setw(20)<<"Roll number:"<<setw(20)<<"email"<<setw(20)<<"Phone number"<<endl;
			 cout<<"_____________________________________________________________________________________"<<endl;
			 cout<<name<<setw(20)<<roll_no<<setw(20)<<email<<setw(20)<<phone;
			 cout<<endl<<endl;
			 
		    	}
};
class Faculty:public Person{
	public:
		string employee_id,salary;
	public:
	
	void getemployee(){
		cout<<endl;
		cout<<"Enter the employee_id:"<<endl;
		cin>>employee_id;
		cout<<"Enter the salary:"<<endl;
		cin>>salary;
	}		
	
	void displayemployee(){
        cout<<endl;
         cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^FACULTY DATA^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
		 cout<<"Faculty:"<<setw(20)<<"employee_id"<<setw(20)<<"email:"<<setw(20)<<"Phone number"<<setw(20)<<"salary"<<setw(20)<<endl;
		 cout<<"________________________________________________________________________________________"<<endl;
	     cout<<name<<setw(20)<<employee_id<<setw(20)<<email<<setw(20)<<phone<<setw(20)<<salary<<endl;
	}
};
int main(){
	Student s;
	s.getdata();
	s.get();
	s.display();
	
	Faculty f;
	f.getdata();
	f.getemployee();
	f.displayemployee();

}
