
#include<stdio.h>

 double pow2(int a,int b){
     if(b==0)
     return 1;
     if(b==1)
     return a;
     else if(!(b&1))
     {
     	return pow(a*a,b/2);
     }
     else if(b&1)
     {
     	return a*pow(a,b-1);
     }
}
int main(void) {
	// your code goes here
	int t,n,i,j;
	double sum=0,dp[51]={0};
	scanf("%d",&t);
	
		dp[1]=1;
		dp[2]=3;
		for(i=3;i<=50;i++)
		{
		sum=0;
		j=i;
		while(j--)
		{
		sum+=dp[j];	
		}
		dp[i]=sum+pow2(2,i-1);
		}	
	for(i=0;i<t;i++)
	{
		
		scanf("%d",&n);
		printf("%.0lf ",pow2(2,n-1));
		printf("%.0lf\n",dp[n]);
	}
	return 0;
}
