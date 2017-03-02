#include <bits/stdc++.h>
using namespace std;
#define ll long long 
ll fibo[100];
ll sum(ll n)
{
	ll s=1;
	for(ll i=2;i<=sqrtl(n);i++)
	{
		if(n%i==0)
		{
			s+=i;
		}
		if(((n/i)!=i)&&n%(n/i)==0)
		{
			s+=(n/i);
		}
	}
	return s;
}
ll num(ll n)
{
	ll c=1;
	for(ll i=2;i<=sqrtl(n);i++)
	{
		if(n%i==0)
		{
			c++;
		}
		if(((n/i)!=i)&&n%(n/i)==0)
		{
			c++;
		}
	}
	return c;
}
int main() {
	// your code goes here
	fibo[0]=0;
	fibo[1]=1;
	for(ll i=2;i<18;i++)
	{
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
	ll t,n,m,k=1;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll s=sum(n);
		s=s%m;
		ll no=num(s);
		if(binary_search(fibo,fibo+18,no))
		{
			cout<<"Case #"<<k++<<" : YES."<<endl;
		}
		else
		{
			cout<<"Case #"<<k++<<" : NO."<<endl;
		}
	}
	return 0;
}