#include<iostream>
using namespace std;
int main(){
	float p,t,r,i;
	cout<<"input the principle:";
	cin>>p;
	cout<<"input the time:";
	cin>>t;
	cout<<"input the intrest:";
	cin>>r;
	i=(p*t*r)/100;
	cout<<"the simple intrest:"<<i<<endl;
	return 0;
}