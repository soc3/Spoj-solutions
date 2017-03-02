#include<stdio.h>
long long int gcd(long long int a,long long int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main()
{
	long long int t,a,b,c,i;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld%lld%lld",&a,&b,&c);
		if(c>a&&c>b)
		{
			printf("NO\n");
		}
		else if(c%gcd(a,b)==0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}