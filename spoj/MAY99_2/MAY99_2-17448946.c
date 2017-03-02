#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll pow2(ll a,ll b)
{
	if(b==0)
	return 1;
	else if(b%2==0)
	return pow2(a*a,b/2);
	else if(b%2!=0)
	return a*pow2(a,b-1);
}
int main()
{
	ll t,k;
	cin>>t;
	while(t--)
	{
		cin>>k;
		ll r=1;
		while(k>0)
		{
			k-=(pow2(5,r));
			r++;   
		}
		k+=(pow2(5,r-1));
		ll dig=r-1;
		ll num=k-1;
		char str[101]={0};
		ll temp=dig;
		while(1)
		{
			if(dig==0)
			break;
			ll x=num%5;
			num/=5;
			if(x==0)
			str[--dig]='m';
			else if(x==1)
			str[--dig]='a';
			else if(x==2)
			str[--dig]='n';
			else if(x==3)
			str[--dig]='k';
			else if(x==4)
			str[--dig]='u';
		}
		str[temp]='\0';
		cout<<str<<endl;
	}
	return 0;
}