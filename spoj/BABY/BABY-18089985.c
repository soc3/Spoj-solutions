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
#define mod 1000000007
#define MAX 1000000
#define mset(a,n) memset(a,n,sizeof(a))
#define INF 100000000
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)

int count_set_bits(int n)
{
    int count = 0;
    while (n)
    {
      n &= (n-1) ;
      count++;
    }
    return count;
}	    
int cost[20][20],n;
int dp[1<<20];
int rec(int curr,int mask)// curr-> abhi konsi queen mask-> which of the queens are at correct position(1)
{
    if(curr==n)//matlab saari queens sahi jagah par aa gyi hain
       return 0;
    if(dp[mask]!=-1)
       return dp[mask];
    int ans=INF;  
        for(int j=0;j<n;j++)
        if(!(mask&(1<<(j))))
        ans=min(ans,cost[curr][j]+rec(curr+1,mask|1<<(j)));
    return dp[mask]=ans;
}
int main()
{
	while(1)
	{
	    mset(dp,-1);
		sd(n);
		if(n==0)
			return 0;
		mset(cost,0);	
		int jaha_hain[n+1];  int jaha_honi_chahiye[n+1];
		for (int i = 0; i < n; ++i)
		{
			sd(jaha_hain[i]);
			jaha_hain[i]--;
		}
		for (int i = 0; i < n; ++i)
		{
			sd(jaha_honi_chahiye[i]);//in (i+1)th row
			jaha_honi_chahiye[i]--;
		}
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
			    cost[i][j]=abs(i-j)+abs(jaha_hain[i]-jaha_honi_chahiye[j]);				
		/*int max=pow(2,n);
		int dp[max];
		for(int j=0;j<max;j++)
		dp[j]=INF;
		dp[0]=0;
		for(int mask=0 ; mask<max ; mask++)
		{
			int x=count_set_bits(mask);
			//ye wala apni correct position pe pahuch chuka hain ya nahi
			for (int j = 0; j < n; ++j)
			{
				if((mask&(1<<j))==0)
					dp[mask|(1<<j)]=min(dp[mask|1<<j],dp[mask]+cost[x][j]);
			}
		}*/
		int ans=rec(0,0);  //curr,mask
		printf("%d\n",ans);
	}        
}