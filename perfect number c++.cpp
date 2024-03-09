#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"enter a number";
	cin>>n;
	i=1;
	while(i<n)
	{
		if(n%i==0)
		sum=sum+i;
		i++;
	}
	if(sum==n)
	cout<<"the number is perfect";
	else
	cout<<"the number is not perfect";
}
