#include<stdio.h>
int main()
{
	 int t,i,a;
	 long int sum=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&a);
		if(a>0)
		sum+=a;
	}
	printf("%ld",sum);
	return 0;
}