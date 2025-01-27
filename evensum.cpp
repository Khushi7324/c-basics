#include<iostream>
using namespace std;
int main()
{
	int i=1,n,sum=0;
	cout<<"Enter n:";
	cin>>n;
	while(i<=n)
	{
		if(i%2==0)
		{
			cout<<i;
			sum=sum+i;
		}
		i++;
	}
	cout<<"\nSum of even natural number is:"<<sum;
}
