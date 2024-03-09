#include<iostream>
using namespace std;
int main(){
	int votingage,age,yearsleft;
	cout<<"enter your age:";
	cin>>age;
	votingage=18;
	if(age>=votingage){
		cout<<"you are eligible";
	}
	else{
		yearsleft=votingage-age;
		cout<<"you are not eligible to vote years left to vote:"<<yearsleft<<endl;
		 
		
	}
	return 0;
}