#include <stdio.h>

int main(void) {
	// your code goes here
	long long  t,i,j;
	double a3,al3,s,a1,d,n;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lf%lf%lf",&a3,&al3,&s);
		n=(2*s)/(a3+al3);
		printf("%.0lf\n",n);
		a1=((3*a3*a3)+(5*al3*a3)-(2*a3*s)+(2*al3*al3))/((5*a3)+(5*al3)-(2*s));
		d=((a3*a3)-(al3*al3))/((5*a3)+(5*al3)-(2*s));
		for(j=0;j<n;j++)
		{
			printf("%.0lf ",a1+j*d);
		}
	}
	return 0;
}
