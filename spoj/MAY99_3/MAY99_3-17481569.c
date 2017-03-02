#include<bits/stdc++.h>
using namespace std;

#define ll long long 
ll gcd(ll a, ll b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main()
{
	ll t,x,y,z;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>z;
		if(z>max(x,y))
		{
			cout<<"NO"<<endl;
		}
		else if(z%gcd(x,y)==0)
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