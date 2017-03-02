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
#define MAX 1000
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
int n,a[MAX];
int dp[MAX][MAX];
int rec(int curr,int last)
{
	if(curr==n)
		return 0;
	if(last!=-1&&dp[curr][last]!=-1)
		return dp[curr][last];
	int ans=0;
	ans=max(ans,rec(curr+1,last));
	if(last==-1 || a[curr]>a[last])
		ans=max(ans,1+rec(curr+1,curr));
	if(last==-1)
		return ans;
	return dp[curr][last]=ans;
}	    
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin>>n;
	memset(dp,-1,sizeof(dp));  
	for (int i = 0; i < n; ++i)
	    cin>>a[i];
	int ans=rec(0,-1);
	cout<<ans;
    return 0;
}	   