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

int main(int argc, char const *argv[])
{
	int t;
	sd(t);
	while(t--)
	{
		int n;
		sd(n);
		int a[n];
		for (int i = 0; i < n; ++i)
			sd(a[i]);	
		sort(a , a + n);
		long long  s = 1,c=0;
		for (int i = 0; i < n; ++i)
		{
			int nn = a[i] - i;
			if(nn < 0)
			{
				c=1;
				printf("0\n");
				break;
			}
			s = ((s)*(nn))%MOD;
		}
		if(c==0)
		plld(s);
	}
	printf("KILL BATMAN");
	return 0;
}