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
#define mod 1000000007
#define MAX 100005
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
ll n,a[MAX];	  
ll dp[MAX][4][2];
ll rec(ll i, ll p, ll s)
{
	if(i>=n)
		return 0;
	if(i!=-1&&dp[i][p][s]!=-1)
		return dp[i][p][s];
	if(s==0)
	{
	    ll maxi=0;
	    if(i+1<n)
	    maxi=max(maxi,a[i+1]+rec(i+1,1,1));
	    else
	    maxi=max(maxi,rec(i+1,0,1));
	    //cout<<maxi<<endl;
	    if(i+2<n)
	    maxi=max(maxi,a[i+1]+a[i+2]+rec(i+2,2,1));
	    else if(i+1<n)
	    maxi=max(maxi,a[i+1]+rec(i+1,1,1));
	    else
	    maxi=max(maxi,rec(i+1,0,1));
	    if(i+3<n)
	    maxi=max(maxi,a[i+1]+a[i+2]+a[i+3]+rec(i+3,3,1));
	    else if(i+2<n)
	    maxi=max(maxi,a[i+1]+a[i+2]+rec(i+2,2,1));
	    else if(i+1<n)
	    maxi=max(maxi,a[i+1]+rec(i+1,1,1));
	    else
	    maxi=max(maxi,rec(i+1,0,1));
	    if(i==-1)
	    return maxi;
	    else
	    return dp[i][p][s]=maxi;
	}
	else
	{
		return dp[i][p][s]=rec(i+p,p,0);
	}
}  
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
		memset(dp,-1,sizeof(dp));
		cin>>n;
		for (ll i = 0; i < n; ++i)
		  cin>>a[i];
		  ll ans=rec(-1,0,0);
	      cout<<ans<<endl;
	}        
    return 0;
}	   