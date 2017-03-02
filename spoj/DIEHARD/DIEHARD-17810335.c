#include <bits/stdc++.h>
using namespace std;
int dp[1010][1010];
int rec(int h,int a,int curr)
{
	if(h<=0||a<=0)
	return 0;
	else if(dp[h][a]!=-1)
	return dp[h][a];
	else
	{
		if(curr==0)
		{
			return dp[h][a]=1+rec(h+3,a+2,1);
		}
		else if(curr==1)
		{
			return dp[h][a]=1+max(rec(h-5,a-10,2),rec(h-20,a+5,3));
		}
		else if(curr==2)
		{
			return dp[h][a]=1+max(rec(h+3,a+2,1),rec(h-20,a+5,3));
		}
		else if(curr==3)
		{
			return dp[h][a]=1+max(rec(h-5,a-10,2),rec(h+3,a+2,1));
		}
	}
}
int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	   memset( dp , -1 , sizeof(dp) );	
	   int h,a;
	   scanf("%d%d",&h,&a);
	   long ans=rec(h,a,0);
	   printf("%ld\n",ans-1);
	}
	return 0;
}