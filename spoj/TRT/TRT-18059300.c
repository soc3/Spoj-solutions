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
#define MAX 2005
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
int n;	   
int a[MAX],dp[MAX][MAX]; 
int rec(int i,int j)
{
	if(i>j)
		return 0;
	if(dp[i][j]!=-1)
		return dp[i][j];
	return dp[i][j]=max(a[i]*(i+n-j)+rec(i+1,j),a[j]*(i+n-j)+rec(i,j-1));
}
int main()
{
	mset(dp,-1);
	sd(n);
	for (int i = 1; i <= n; ++i)
		sd(a[i]);
	int ans=rec(1,n);
	printf("%d",ans);
    return 0;
}	   