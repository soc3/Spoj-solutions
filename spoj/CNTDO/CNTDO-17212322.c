#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	ll t,n;
	cin>>t;
	while(t--)
	{
		ll freq1[100000]={0},freq2[100000]={0};
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>0)
			freq1[a[i]]++;
			else
			{
				freq2[-a[i]]++;
			}
		}
		ll c=0;
		for(ll i=0;i<n;i++)
		{
			if(a[i]>0)
			{
			if(freq1[a[i]]!=0&&freq1[2*a[i]]!=0)
			{
				c++;
			}
			}
			else
			{
			if(freq2[-a[i]]!=0&&freq2[-2*a[i]]!=0)
			{
				c++;
			}	
			}
		}
		cout<<c<<endl;
	}
	return 0;
}