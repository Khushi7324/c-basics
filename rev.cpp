#include<iostream>
using namespace std;
int main()
{
	int num,n1,n2,n3,rev;
	cout<<"Enter 3 digit number:";
	cin>>num;
	n1=num%10;
	num=num/10;
	n2=num%10;
	num=num/10;
	n3=num;
	rev=n1*100+n2*10+n3*1;
	cout<<"Reverse of a number is:"<<rev;
}
