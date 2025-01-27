#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a character:";
	cin>>ch;
	if(ch=='a'||ch=='z' &&ch=='A'||ch=='Z')
	{
		cout<<"It is a alphabet";
	}
	else
	{
		cout<<"It is not a alphabet";
	}
	
}
