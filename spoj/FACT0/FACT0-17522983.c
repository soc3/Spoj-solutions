#include<bits/stdc++.h>
using namespace std;

  	
#define N 10000000
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


int main(int argc, char const *argv[])
{
	
	ll n;
	while((slld(n)==1) && n)
	{
		ll c = 0;
	 while (n%2 == 0)
    {
        c++;
        n = n/2;
    }
    if(c!=0)
    cout<<2<<"^"<<c<<" ";
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (ll i = 3; i * i <= n; i = i+2)
    {
        // While i divides n, print i and divide n
        ll c1=0;
        while (n%i == 0)
        {
        	c1++;
            n = n/i;
        }
        if(c1!=0)
        cout<<i<<"^"<<c1<<" ";
    }
 
    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2)
        cout<<n<<"^"<<1<<" ";
        cout<<endl;
	}
	return 0;
}