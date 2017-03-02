#include<stdio.h>
int main()
{
	double r;
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lf",&r);
		printf("Case %d: %.2lf\n",i+1,((4.0*r*r)+0.25));
	}
	return 0;
}