#include<bits/stdc++.h>
using namespace std;

  	
#define MOD 10000007
#define ll long long
#define upperlimit 1000100
#define INF 1e18
#define eps 1e-8
#define endl '\n'
#define pcc pair<char,char>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define tr(container,it) for(typeof(container.begin()) it=container.begin();it!=container.end();it++)
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
	int dp[205][205];

	for(int i = 0 ; i < 205; i++)
	{
		for(int j = 0; j < 205 ;j++)
		{
			if(j == 0 || j == i)
				dp[i][j] = 1;
			else
			{
				dp[i][j] = (dp[i-1][j] + dp[i-1][j-1])%MOD;
			}
		}
	}

	int n,r,ans;
	sd(n);   sd(r);
	if(n < r)
	{
		pd(-1);
	}
	else
	{
		n = n - r;
		ans =  dp[n + r - 1][r - 1];
		pd(ans);
	}
	return 0;
}