#include<stdio.h>

int main()
{
	long long int t,n,i,j,a[100000],sum;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lld",&a[j]);
		}
		j=1;
		sum=0;
		while(j<n&&(n-j)>(j-1))
		{
			sum+=((n-(2*j-1))*(a[n-j]-a[j-1]));
			j++;
			}
		printf("%lld\n",sum);
	}
	return 0;
}
	