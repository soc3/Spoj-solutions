#include <stdio.h>

int main(void) {
	long long int t,i,n,j,z,sum;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		
		sum=0;
		scanf("%lld",&n);
		for(j=0;j<n;j++)
		{
		scanf("%lld",&z);
		sum+=(z%n);
		}
		if(sum%n==0)
		printf("YES\n");
		else
		printf("NO\n");
	}
	
	return 0;
}