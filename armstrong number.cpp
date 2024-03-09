#include<iostream>
using namespace std;
int main(){
	int n,r,sum=0,temp;
	cout<<"enter a number=";
	cin>>n;
	temp=n;
	while(n>0){
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	cout<<temp<<"amstrong number."<<endl;
	else
	cout<<temp<<"not a armstrong number."<<endl;
	return 0;
}