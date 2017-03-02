#include <stdio.h>
#define PI 3.1415926

int main(void) {
	// your code goes here
	double l;
	double a;
	scanf("%lf",&l);
	while(1)
	{
		if(l==0)
		break;
		a=(l*l)/(2*PI);
		printf("%.2lf\n",a);
		scanf("%lf",&l);
	}
	return 0;
}
