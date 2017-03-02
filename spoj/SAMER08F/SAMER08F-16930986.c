#include <stdio.h>

int main(void) {
  int n,dp[1000],i;
  scanf("%d",&n);
  dp[1]=1;
  dp[2]=5;
  for(i=3;i<=100;i++)
  {
  	dp[i]=i*i+dp[i-1];
  }
  while(n!=0)
  {
  	printf("%d\n",dp[n]);
  	scanf("%d",&n);
  }
	return 0;
}