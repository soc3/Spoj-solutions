#include<bits/stdc++.h>
using namespace std;
	    
#define sd(a) scanf("%d",&a)
#define ss(a) scanf("%s",a)
#define slld(a) scanf("%lld",&a)
#define clr(a) memset(a,0,sizeof(a))
#define debug(a) printf("check%d\n",a)
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define ll long long
#define mset(a,n)  memset(a,n,sizeof(a))
#define mod 100000000000000
#define MAX 105
#define wl(t) while(t--)
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
ll n,k;	   
ll dp[MAX][MAX];
ll a[MAX]; 
ll rec(ll pack, ll weight){
	if(pack>=0 && weight==0) return 0;
	if(pack<0 || weight<0) return mod;
	if(dp[pack][weight]!=-1) return dp[pack][weight];
	ll tmp=mod;
	for(int i=0;i<k;i++){
		if(a[i]==-1) continue;
		tmp=min(tmp,a[i]+rec(pack-1,weight-(i+1)));
	}
	return dp[pack][weight]=tmp;
}
int main()
{
    ll t;
    slld(t);
    wl(t){
        for(int i=0;i<MAX;i++)
        a[i]=0;
        memset(dp,-1,sizeof(dp));
    	slld(n); slld(k);
    	for (ll i = 0; i < k; ++i)
    	{
    		/* code */
    		slld(a[i]);
    	}
    	ll ans=rec(n,k); 
    	if(ans>=mod) ans=-1;
    	cout<<ans<<endl;
    }        
    return 0;
}	   