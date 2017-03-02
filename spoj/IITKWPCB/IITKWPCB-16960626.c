#include <stdio.h>
long long gcd(long long a, long long b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main(void) {
	// your code goes here
	long long t,n,i,j;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		for(j=n/2;j>=1;j--)
		{
			if(gcd(j,n)==1)
			{
				printf("%lld\n",j);
				break;
			}
		}
	}
	return 0;
}
