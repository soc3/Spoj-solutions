#include<stdio.h>
int main()
{
	int n,i,j,k,a[1000000],freq[1000000],b,c;
	scanf("%d",&n);
	k=0;
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[k++],&b);
		for(j=0;j<b;j++)
		{
			scanf("%d",&a[k++]);
		}
	}
	for(j=0;j<100000;j++)
	{
		freq[j]=0;
	}
	for(j=0;j<k;j++)
	{
		freq[a[j]]++;
	}
	c=0;
	for(j=0;j<100000;j++)
	{
		if(freq[j]!=0)
		c++;
	}
	printf("%d",c-n);
	return 0;
}