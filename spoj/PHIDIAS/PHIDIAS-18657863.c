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
#define MAX 605
#define wl(t) while(t--)
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
int dp[MAX][MAX];	    
int rec(int w, int h){
	int &ans=dp[w][h];
	if(ans!=-1)  return ans;
	if(w==1 && h==1) return ans=1;
	int maxi=w*h;
	for(int i=1;i<=(w>>1);i++){
		int tmp=rec(i,h);
		tmp+=rec(w-i,h);
		if(tmp<maxi)  maxi=tmp;
	}
	for(int i=1;i<=(h>>1);i++){
		int tmp=rec(w,i);
		tmp+=rec(w,h-i);
		if(tmp<maxi) maxi=tmp;
	}
	return ans=maxi;
}
int main()
{
	int t;
	sd(t);
	wl(t){
		mset(dp,-1);
		int w,h;
		sd(w); sd(h);
		int n;
		sd(n);
		for (int i = 0; i < n; ++i)
		{
			/* code */
			int a,b;
			sd(a); sd(b);
			dp[a][b]=0;
		}
		int ans=rec(w,h);
		printf("%d\n",ans);
	}       
    return 0;
}	   