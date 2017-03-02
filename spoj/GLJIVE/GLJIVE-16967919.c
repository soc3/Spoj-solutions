#include<stdio.h>
#include<math.h>
int main()
{
	int a[10],sum=0,i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(sum>100)
		break;
		else
		sum+=a[i];
	}
	if(sum-100<=100-abs(sum-a[i-1]))
	{
		printf("%d",sum);
	}
	else
	{
		printf("%d",sum-a[i-1]);
	}
	return 0;
}