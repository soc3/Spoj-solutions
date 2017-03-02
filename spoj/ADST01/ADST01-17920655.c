#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
ll power(ll a , ll b)
{
	if(b==0)
		return 1;
	ll temp=power(a,b/2);
	temp=(temp*temp)%mod;
	if(b%2)
		temp=(temp*a)%mod;
	return temp;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n;
		scanf("%lld",&n);
	    ll ans= ((((54*(power(10,n)-1))%mod-(4*(power(10,n)-10))%mod+mod+(36*(n-1))%mod)%mod)*power(81,mod-2))%mod;
		printf("%lld\n",ans);
	}
	return 0;
}