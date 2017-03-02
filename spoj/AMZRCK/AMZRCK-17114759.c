#include<iostream>
using namespace std;
long long int a[1000000];
int main()
{
	long long t,n,i;
	cin>>t;
	a[1]=2;
	a[2]=3;
	for(i=3;i<1000;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	while(t--)
	{
		cin>>n;
		cout<<a[n]<<endl;
	}
	return 0;
}