#include<bits/stdc++.h>
using namespace std;
	    
#define sd(a) scanf("%d",&a)
#define ss(a) scanf("%s",a)
#define clr(a) memset(a,0,sizeof(a))
#define debug(a) printf("check%d\n",a)
#define slld(a) scanf("%lld",&a)
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define ll long long
#define mset(a,n)  memset(a,n,sizeof(a))
#define mod 1000000007
#define MAX 600
#define wl(t) while(t--)
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
ll n,k;
double dp[551][2000];
double rec(ll i, ll j){
	if(dp[i][j]!=-1) return dp[i][j];
	if(i==1){
		return dp[i][j]=(j>=1 && j<=6)/6.0;
	}
	if(i<=0)  return dp[i][j]=0;
    double tmp=0;
	for (int l = 1; l <= 6 ; ++l)
	{
		/* code */
		tmp+=rec(i-1,j-l)/6.0;
	}
	return dp[i][j]=tmp;
}
int main()
{
	ll t;
	for(int i=0;i<551;i++){
	        for(int j=0;j<2000;j++){
	            dp[i][j]=-1;
	        }
	    }
	slld(t);
	wl(t){
		slld(n); slld(k);
		if(n>550 || k>2000)
			cout<<0<<endl;
		else{
			double ans=rec(n,k);
			cout<<(ll)(ans*100.0)<<endl;
		}
	}
	return 0;
}