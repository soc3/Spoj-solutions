#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		int ans=0;
		int t=a[0],c=0;
		for(int i=1;i<n;i++)
		{
			if(a[i]>=t&&b[i]<t)
			{
				t=a[i];
				c++;
			}
			else if(a[i]<t&&b[i]>=t)
			{
				t=b[i];
				c++;
			}
			else if(a[i]>=t&&b[i]>=t)
			{
				t=min(a[i],b[i]);
				c++;
			}
			else
			{
				break;
			}
		}
		if(c==n-1)
		{
			ans=1;
		}
		 t=b[0],c=0;
		for(int i=1;i<n;i++)
		{
			if(a[i]>=t&&b[i]<t)
			{
				t=a[i];
				c++;
			}
			else if(a[i]<t&&b[i]>=t)
			{
				t=b[i];
				c++;
			}
			else if(a[i]>=t&&b[i]>=t)
			{
				t=min(a[i],b[i]);
				c++;
			}
			else
			{
				break;
			}
		}
		if(c==n-1)
		{
			ans=1;
		}
		if(ans==0)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
	
	return 0;
}