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
#define slld(a) scanf("%lld",&a)
#define PB push_back
#define ll long long
#define mset(a,n)  memset(a,n,sizeof(a))
#define mod 1000000007
#define MAX 6200 
#define wl(t) while(t--)
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
ll dp[MAX][MAX];
string s;	    
ll rec(ll i, ll j){
	if(i>=j) return 0;
	ll &ans=dp[i][j];
	if(ans!=-1) return ans;
	if(s[i]==s[j])
		return ans=rec(i+1,j-1);
	return ans=1+min(rec(i+1,j),rec(i,j-1));
}
int main()
{
    ll t;
    slld(t);
    wl(t){
    	memset(dp,-1,sizeof(dp));
    	cin>>s;
    	int n=s.length();
    	ll ans=rec(0,n-1);
    	cout<<ans<<endl;
    }
    return 0;
}	   