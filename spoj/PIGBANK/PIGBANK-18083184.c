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
#define mset(a,n)  memset(a,n,sizeof(a))
#define mod 1000000007
#define MAX 1000000
const int INF = 1000000000;
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
int e,f,n;	    
vector<pair<int,int> >v;
ll dp[505][10005];
ll rec(int i,ll wt)
{
	if(wt==(f-e))
		return 0;
	if(wt>(f-e))
		return INF;
	if(i>=n)
		return INF;
	if(dp[i][wt]!=-1)
		return dp[i][wt];
	int kk=(f-e-wt)/(v[i].second);
	ll mini=min(v[i].first+rec(i+1,(wt+v[i].second)),rec(i+1,wt));
	for(ll j=2;j<=kk;j++)
		mini=min(j*v[i].first+rec(i+1,(wt+j*v[i].second)),mini);
	return dp[i][wt]=mini;	
}
int main()
{
    int t;
    sd(t);
    while(t--)
    {
    	mset(dp,-1);
    	v.clear();
    	sd(e); sd(f);
    	sd(n);
    	for (int i = 0; i < n; ++i)
    	{
    		int a,b;
    		sd(a); sd(b);
    		v.PB(MP(a,b));
    	}
    	ll ans=rec(0,0);
    	if(ans==INF)
    		printf("This is impossible.\n");
    	else
    		printf("The minimum amount of money in the piggy-bank is %lld.\n",ans);
    }	        
    return 0;
}	   