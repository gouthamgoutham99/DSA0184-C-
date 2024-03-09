#include<iostream>
using namespace std;
int main()
{
	int a,b,min,gcd,i;
	cout<<"enter two numbers";
	cin>>a>>b;
	min=(a<b) ? a:b;
	for(i=1;i<=min;i++)
	{
		if(a%i==0 && b%i==0)
		{
			gcd=i;
		}
	}
	cout<<"gcd"<<gcd;
}
