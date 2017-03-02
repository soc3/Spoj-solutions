#include<stdio.h>
#include<math.h>
int main()
{
	double t,r1,r2,r3,r,i;
	scanf("%lf",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lf%lf%lf",&r1,&r2,&r3);
		r=1.0/((1.0/r1)+(1.0/r2)+(1.0/r3)+2*sqrt(1.0/(r1*r2)+1.0/(r1*r3)+1.0/(r2*r3)));
		printf("%.6lf\n",r);
	}
	return 0;
}