#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter a=";
	cin>>a;
	cout<<"Enter b=";
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<"After swap a is:"<<a;
	cout<<"\nAfter swap b is:"<<b;
}
