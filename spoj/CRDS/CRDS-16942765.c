#include <stdio.h>
#define M 1000007
int main(void) {
	// your code goes here
	int t,n,i,dp[1000000];
	scanf("%d",&t);
	dp[0]=2;
	dp[1]=7;
	for(i=2;i<1000000;i++)
	{
		dp[i]=(2%M*(i%M+1%M)%M)%M+i%M+dp[i-1]%M;
	}
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		printf("%d\n",dp[n-1]%M);
	}
	return 0;
}
