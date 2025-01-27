#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"Enter n=";
	cin>>n;
	while(i<=n)
	{
		if(i%2==1)
		{
			cout<<i;
			sum=sum+i;
		}
		i++;
	}
	cout<<"\nSum is:"<<sum;
}
