	#include<bits/stdc++.h>
	using namespace std;
		    
	#define sd(a) scanf("%d",&a)
	#define ss(a) scanf("%s",a)
	#define sl(a) scanf("%lld",&a)
	#define clr(a) memset(a,0,sizeof(a))
	#define debug(a) prllf("check%d\n",a)
	#define all(x) x.begin(), x.end()
	#define F first
	#define S second
	#define MP make_pair
	#define PB push_back
	#define ll long long
	#define mset(a,n)  memset(a,n,sizeof(a))
	#define mod 1000000007
	#define MAX 1000
	const int INF = 0x3f3f3f3f;
	#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
	typedef pair<ll,ll> pii;
	ll o,n,m;	
	vector<pair<pair<ll,ll> , ll> >v;
	ll dp[30][90][1005];   
	ll rec(ll t,ll a,ll i)
	{
		if((t>=o)&&(a>=n))
			return 0;
		if(i>=m)
			return INF;
		if(dp[t][a][i]!=-1)
			return dp[t][a][i];
		return dp[t][a][i]=min(v[i].second+rec((t+v[i].first.first)>=o?o:(t+v[i].first.first),(a+v[i].first.second)>=n?n:(a+v[i].first.second),i+1),rec(t,a,i+1));
	} 
	int main()
	{
		ll t;
		sl(t);
		while(t--)
		{
			memset(dp,-1,sizeof(dp));
			sl(o);  sl(n);
			sl(m);
			v.clear();
			for (ll i = 0; i < m; ++i)
			{
				ll a,b,c;
				sl(a); sl(b); sl(c);
				v.PB(MP(MP(a,b),c));
			}
			ll ans=rec(0,0,0);
			printf("%lld\n",ans);
		}        
	    return 0;
	}	   