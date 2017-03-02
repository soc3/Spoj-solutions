#include<bits/stdc++.h>
using namespace std;
  	
#define MAX 200005
#define ll long long
#define upperlimit 1000100
#define INF 1e18
#define eps 1e-8
#define endl '\n'
#define pcc pair<char,char>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define tr(container,it) for(typeof(container.begin()) it=container.begin();it!=container.end();it++)
#define MOD 1000000007
#define slld(t) scanf("%lld",&t)
#define sd(t) scanf("%d",&t)
#define pd(t) printf("%d\n",t)
#define plld(t) printf("%lld\n",t)
#define mp(a,b) make_pair(a,b)
#define FF first
#define SS second
#define pb(x) push_back(x)
#define vi vector<int>
#define clr(a) memset(a,0,sizeof(a))
#define debug(a) printf("check%d\n",a)

int main(int argc, char const *argv[])
{
	ll t,n,x=1;
	slld(t);
	while(t--)
	{
		slld(n);
		ll a[n];
		for (ll i = 0; i < n; ++i)
		{
			slld(a[i]);
		}
		ll dp[n];
		dp[0]=a[0];
		dp[1]=max(a[0],a[1]);
		for (ll i = 2; i < n; ++i)
		{
			dp[i]=max(dp[i-1],dp[i-2]+a[i]);
		}
	    printf("Case %lld: ",x++);
		plld(dp[n-1]);
	}
	return 0;
}