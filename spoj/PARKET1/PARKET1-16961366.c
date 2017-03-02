#include<stdio.h>
#include<math.h>
int main()
{
	double x,y,a,b;
	scanf("%lf%lf",&x,&y);
	a=(x+4.0+sqrt(pow(x+4,2)-16.0*(x+y)))/4.0;
	b=(x+y)/a;
	printf("%.0lf %.0lf",a,b);
	return 0;
}