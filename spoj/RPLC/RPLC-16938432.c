#include<stdio.h>
int main()
{
	long long int c=0,t,n,b,i,j,ans,ans2;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		c=0;
		ans=0;
		ans2=0;
		scanf("%lld",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lld",&b);
				ans+=b;
			if(ans<=0)
			{
				c++;
				ans2+=(1-ans);
				ans=1;
			}
		}
		
		if(c!=0)
		printf("Scenario #%lld: %lld\n",i+1,ans2);
		else if(c==0)
		printf("Scenario #%lld: %d\n",i+1,1);
	}
	return 0;
}