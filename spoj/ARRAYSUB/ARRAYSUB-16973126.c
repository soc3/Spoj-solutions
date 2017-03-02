#include <stdio.h>
int main(void) {
	// your code goes here
	int n,a[1000000],k,i,max,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
    for(i=0;i<=n-k;i++)
	{
		if(i!=0)
		printf(" ");
		max=0;
		for(j=i;j<i+k;j++)
		{
			if(a[j]>max)
			max=a[j];
		}
		printf("%d",max);
	}
	return 0;
}
