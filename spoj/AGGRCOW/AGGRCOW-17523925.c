#include<bits/stdc++.h>
using namespace std;

  	
#define N 1000000
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

ll c, n, a[N];

bool func(ll x)
{
	int lastcow = a[0], cows = 1;
	for (int i = 1; i < n ; ++i)
	{
		if((a[i]-lastcow)>=x)
		{
			if((++cows) == c)
				return 1;
			lastcow = a[i];
		}
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	ll t  ;
	slld(t);
	while(t--)
	{
		slld(n);  slld(c);
	
		for (int i = 0; i < n; ++i)
		{
			slld(a[i]);
		}
		ll mid = 0;
		sort(a,a+n);
		ll start = 0, end = a[n-1] - a[0] + 1 ;
		while((end - start) > 1)
		{
			ll  mid = start + (end - start)/2;
			(func(mid) ? start : end) = mid;
		}
		plld(start);
	}
	return 0;
}