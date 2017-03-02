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
int W,n,w[1000000],v[1000000];
int dp[3000][3000];
int knap(int wt , int i)
{
	if(i > n)
		return 0;
	if(dp[wt][i]!=-1)
		return dp[wt][i];
	if((wt + w[i]) <= W)
	{
		return max( v[i] + knap(wt + w[i], i+1), knap(wt, i + 1) );
	}
	else
	{
		return dp[wt][i] = knap(wt,i+1);
	}

}
int main(int argc, char const *argv[])
{
	memset(dp, -1, sizeof(dp));
	sd(W);  sd(n);
	for (int i = 0; i < n; ++i)
	{
		sd(w[i]);  sd(v[i]);
	}

	int maxvalue = knap(0 , 0);
	pd(maxvalue);	
	return 0;
}