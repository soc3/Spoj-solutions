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
#define MAX 50
#define wl(t) while(t--)
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
int n,k;
string s;
ll dp[MAX][MAX];	    
int rec(int i, int bal){
	if(bal<0)  return 0;
	if(i==2*n-1)   return bal==0;
	ll &ans=dp[i][bal];
	if(ans!=-1)  return ans;
	if(s[i+1]=='[')
		return ans=rec(i+1,bal+1);
	return ans=rec(i+1,bal+1)+rec(i+1,bal-1);	
}
int main()
{
	int t;
	sd(t);
	wl(t){
		memset(dp,-1,sizeof(dp));
		sd(n); sd(k);
		for (int i = 0; i < 2*n; ++i)
		{
			/* code */
			s[i]='0';
		}
		for (int i = 0; i < k; ++i)
		{
			/* code */
			int a;
			cin>>a;
			a--;
			s[a]='[';
		}
		ll ans=rec(0,1);
		cout<<ans<<endl;
	}        
    return 0;
}	   