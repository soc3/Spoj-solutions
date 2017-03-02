#include<bits/stdc++.h>
using namespace std;

#define ll long long 
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
			k-=(pow(2,r));
			r++;   
		}
		k+=(pow(2,r-1));
		ll dig=r-1;
		ll num=k-1;
		char str[1000000]={0};
		ll temp=dig;
		while(1)
		{
			if(dig==0)
			break;
			ll x=num%2;
			num/=2;
			if(x==0)
			str[--dig]='5';
			else
			str[--dig]='6';
		}
		str[temp]='\0';
		cout<<str<<endl;
	}
	return 0;
}