#include<iostream>
using namespace std;

int main()
{
	int t,n,a[1000000],i,k;
	a[0]=1;
	k=2;
	for(i=1;i<1000000;i+=2)
	{
		a[i]=a[i+1]=k++;
	}
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<a[n-2]<<endl;
	}
	
	return 0;
}