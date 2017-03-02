#include<bits/stdc++.h>
using namespace std;
int n,a[1000000];
int dp[1005][1005];
int rec(int s,int l,int st)
{
    if(s>l)
    return 0;
	else if(dp[s][l]!=-1)
		return dp[s][l];
	else if(st%2!=0)
	    return dp[s][l]=max(a[s]+rec(s+1,l,st+1),a[l]+rec(s,l-1,st+1));
	else
	{
	    if(a[s]>=a[l])
	    return rec(s+1,l,st+1);
	    else
	    return rec(s,l-1,st+1);
	}
}
int main()
{
	int x=1;
	while(1)
	{
		memset(dp,-1,sizeof(dp));
		scanf("%d",&n);
		if(n==0)
			break;
		int tot=0;	
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			tot+=a[i];
		}
		int ansop=rec(0,n-1,1);
		int ansgr=tot-ansop;
		printf("In game %d, the greedy strategy might lose by as many as %d points.\n",x++,abs(ansop-ansgr));
	}
	return 0;
}