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
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
ll horner(ll poly[], ll n, ll x)
{
    ll result = poly[0];  // Initialize result
 
    // Evaluate value of polynomial using Horner's method
    for (ll i=1; i<n+1; i++)
        result = result*x + poly[i];
 
    return result;
}	    
int main()
{
	ll n;
	ll x=1;
	while(1)
	{
		sl(n);
		if(n==-1)
			return 0;
		printf("Case %lld:\n",x++);	
		ll a[n+1];
		for(ll i=0;i<n+1;i++)
			sl(a[i]);
		ll k;
		sl(k);
		while(k--)
		{
			ll b;
			sl(b);
			ll ans=horner(a,n,b);
			printf("%lld\n",ans);
		}
	}        
}	   