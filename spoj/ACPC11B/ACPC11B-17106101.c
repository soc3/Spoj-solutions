#include<iostream>
#include<cmath>
using namespace std;
#define ll long long 
int main()
{
	ll t,n,m,a[10000],b[10000],j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>m;
		for(i=0;i<m;i++)
		{
			cin>>b[i];
		}
		ll min;
		min=1000000000;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(abs(a[i]-b[j])<min)
				{
					min=abs(a[i]-b[j]);
				}
			}
		}
		cout<<min<<endl;
	}
	return 0;
}