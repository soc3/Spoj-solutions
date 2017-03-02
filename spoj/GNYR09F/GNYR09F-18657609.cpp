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
#define MAX 105
#define wl(t) while(t--)
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
int n,k;
int dp[MAX][2][MAX];	    
int rec(int i, int prev, int bs){
	if(i==n)  return bs==k;
	if(prev!=-1)
	{
	int &ans=dp[i][prev][bs];
	if(prev!=-1 && ans!=-1) return ans;
	ll sum=0;
	sum+=rec(i+1,0,bs);
	if(prev==1)
		sum+=rec(i+1,1,bs+1);
	else
		sum+=rec(i+1,1,bs);
	return ans=sum;
	}else{
	    ll sum=0;
	sum+=rec(i+1,0,bs);
	if(prev==1)
		sum+=rec(i+1,1,bs+1);
	else
		sum+=rec(i+1,1,bs);
	return sum;
	}
}
int main()
{
	int t;
	sd(t);
	wl(t){
		for(int i=0;i<MAX;i++){
			for(int j=0;j<2;j++){
				for(int l=0;l<MAX;l++)
					dp[i][j][l]=-1;
			}
		}
		int x;
		sd(x); sd(n); sd(k);
		printf("%d ",x);
		int ans=rec(0,-1,0);
		printf("%d \n",ans);
	}        
    return 0;
}	   