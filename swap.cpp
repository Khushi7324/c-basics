#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After swap a is :"<<a;
	cout<<"\nAfter swap b is:"<<b;
}
