#include<iostream>
using namespace std;
int main(){
	int n1=0,n2=1,n3,i,number;
	cout<<"enter the no of elemrnts:";
	cin>>number;
	cout<<n1<<""<<n2<<"";//n1=0 and n2=1 it will print ::guru
	for(i=2;i<number;i++)//i=2 because 0 and 1 already printed;guru
	{
		n3=n1+n2;
		cout<<n3<<"";
		n1=n2;
		n2=n3;
		
	}
	return 0;
}