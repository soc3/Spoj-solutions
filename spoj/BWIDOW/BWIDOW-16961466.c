#include<stdio.h>
int main()
{
	long t,n,i,j,max,pos,c,a[1000000],b[1000000];
	scanf("%ld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%ld",&n);
		for(j=0;j<n;j++)
		{
			scanf("%ld%ld",&a[j],&b[j]);
		}
		max=0;
		for(j=0;j<n;j++)
		{
			if(a[j]>max)
			{
			max=a[j];
			pos=j+1;
			}
		}
		c=0;
		for(j=0;j<n;j++)
		{
			if(b[j]<max)
			c++;
		}
		if(c==n-1)
		printf("%ld\n",pos);
		else
		printf("%ld\n",-1);
	}
	return 0;
}