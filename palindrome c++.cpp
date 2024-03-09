#include<iostream>
using namespace std;
int main(){
	int n,r,temp=0,rev=0;
	cout<<"enter a number";
	cin>>n;
	temp=n;
	while(n!=0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
		}
		if(temp==rev)
		cout<<"given number is palindrome";
		else
		cout<<"number is not palindrome";
	}

