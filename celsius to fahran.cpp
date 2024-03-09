#include<iostream>
using namespace std;
int main(){
	float fahrenheit,celsius;
	cout<<"enter the temperature:";
	cin>>celsius;
	fahrenheit=(celsius*9.0)/5.0+32;
	cout<<"the temperature in celsius:"<<celsius;
	cout<<"the temperarure in fahrenheit:"<<fahrenheit;
	return 0;
}