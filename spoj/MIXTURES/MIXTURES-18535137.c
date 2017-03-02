#include<bits/stdc++.h>
using namespace std;
	    
#define sd(a) scanf("%d",&a)
#define ss(a) scanf("%s",a)
#define clr(a) memset(a,0,sizeof(a))
#define debug(a) printf("check%d\n",a)
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define ll long long
#define mset(a,n)  memset(a,n,sizeof(a))
#define mod 100
#define INF 1000000000
#define MAX 105
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
ll a[MAX],n,sum[MAX];
ll dp[MAX][MAX];	   
ll csum(ll a, ll b){
    if(a==0)
    return sum[b]%mod;
    else
    return (sum[b]-sum[a-1]+mod)%mod;
}
ll rec(ll i, ll j){
	if(i==j)  return 0;
	if(dp[i][j]!=-1)
		return dp[i][j];
	ll mini=INF;
	for(int k=i;k<j;k++)
	{
	    	mini=min(mini,((csum(i,k))*((csum(k+1,j))))+rec(i,k)+rec(k+1,j));
	}
	return dp[i][j]=mini;
} 
int main()
{
	while(scanf("%lld",&n)!=EOF){
		memset(dp,-1,sizeof(dp));
		memset(sum,0,sizeof(sum));
		for (ll i = 0; i < n; ++i)
		{
			/* code */
			cin>>a[i];
		}
		sum[0]=a[0];
		for (int i = 1; i < n; ++i)
		{
			/* code */
			sum[i]=(sum[i-1]+a[i]);
		}
		int ans=rec(0,n-1);
		cout<<ans<<endl;
	}        
    return 0;
}	   