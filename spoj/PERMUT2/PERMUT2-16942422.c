#include<stdio.h>
int main()
{
	int n,j,a[1000000],b[1000000],c;
	scanf("%d",&n);
	while(n!=0)
	{
		c=0;
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[j]);
		}
			for(j=1;j<=n;j++)
		{
			if(j!=a[a[j]])
			{
				c=1;
			printf("not ambiguous\n");
			break;
			}
		}
		if(c==0)
		printf("ambiguous\n");
		scanf("%d",&n);
	}
	return 0;
}