#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,dp[10000];
	scanf("%d",&n);
	dp[1]=5;
	dp[2]=12;
	for(i=3;i<=1000;i++)
	{
		dp[i]=dp[i-1]+3*(i-2)+7;
	}
	while(n!=0)
	{
		printf("%d\n",dp[n]);
		scanf("%d",&n);
	}
	return 0;
}
