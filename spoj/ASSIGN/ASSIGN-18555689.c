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
#define MAX 25
#define wl(t) while(t--)
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
int n;	    
vector<int>v[MAX];
ll dp[1300000];
ll rec(int mask){
    if(dp[mask]!=-1)  return dp[mask];
    int i=__builtin_popcount(mask);
    if(i==n){
	if(mask==((1<<n)-1))
		return 1;
	else
	    return 0;
    }
    dp[mask]=0;
	for(int j=0;j<v[i].size();j++){
		if((mask&(1<<(v[i][j]))) == 0){
			dp[mask]+=rec(mask|(1<<(v[i][j])));
		}
	}
	return dp[mask];
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t;
	sd(t);
	wl(t){
	    for(int i=0;i<MAX;i++)
	    v[i].clear();
	    memset(dp,-1,sizeof(dp));
		sd(n);
		for (int i = 0; i < n; ++i)
		{
			/* code */
			for (int j = 0; j < n; ++j)
			{
				/* code */
				int a;
				sd(a);
				if(a)
					v[i].PB(j);
			}
		}
		ll c=rec(0);
		cout<<c<<endl;
	}
    return 0;
}	   