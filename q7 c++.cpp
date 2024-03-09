#include <iostream>
using namespace std;

class student
{
	private: char name[20],add[20];
	  	int roll,zip;
	public: student ( ); 
		~student( ); 
		void read( );
		void disp( );			
};

student :: student( )
{
	cout<<"Student class constructor called."<<endl;
}

void student :: read( )
{
	cout<<"Enter the student Name: ";
	cin>>name;
	cout<<"Enter the student roll no: “;
	cin>>roll;
	cout<<"Enter the student address: ";
	cin>>add;
	
}

void student :: disp( )
{
	cout<<"Studet details"<<endl;
	cout<<"Student Name   :"<<name<<endl;
	cout<<"Roll no is     :"<<roll<<endl;
	cout<<"Address is     :"<<add<<endl;
}

student :: ~student( )
{
	cout<<"Student class destructor called.";
}
 
int main( )
{
	student s;
	s.read();
	s.disp();
}
