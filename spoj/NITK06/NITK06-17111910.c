#include<iostream>
using namespace std;

int main()
{
	long long int t,n,a[10000],i,c;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n-1;i++)
		{
			if(a[i]<a[i+1])
			{
				a[i+1]-=a[i];
				a[i]=0;
			}
			else if(a[i]>a[i+1])
			{
				a[i]-=a[i+1];
				a[i+1]=0;
			}
			else if(a[i]==a[i+1])
			{
				a[i]=a[i+1]=0;
			}
		}
		c=0;
		for(i=0;i<n;i++)
		{
			if(a[i]==0)
			{
				c++;
			}
		}
		if(c==n)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
		
	}
	return 0;
}