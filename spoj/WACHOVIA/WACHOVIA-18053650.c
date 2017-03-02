#include<bits/stdc++.h>
using namespace std;
	    
#define sd(a) scanf("%d",&a)
#define ss(a) scanf("%s",a)
#define sl(a) scanf("%lld",&a)
#define clr(a) memset(a,0,sizeof(a))
#define debug(a) printf("check%d\n",a)
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define ll long long
#define mod 1000000007
#define MAX 1005
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
int W,n;
int w[MAX],v[MAX];
int dp[MAX][MAX];
ll knapsack(int i,int cw)
{
	if(i>=n)
		return 0;
	if(dp[i][cw]!=-1)
	return dp[i][cw];
	if((cw+w[i])>W)
		return dp[i][cw]=knapsack(i+1,cw);
	else
		return dp[i][cw]=max(v[i]+knapsack(i+1,cw+w[i]),knapsack(i+1,cw));
}	    
int main()
{
	int t;
	sd(t);
	while(t--)
	{
	    memset(dp,-1,sizeof(dp));
		sd(W);  sd(n);
		for (int i = 0; i < n; ++i)
		{
			sd(w[i]);  sd(v[i]);
		}
		ll ans=knapsack(0,0);
		printf("Hey stupid robber, you can get %lld.\n",ans);
	}        
    return 0;
}	   