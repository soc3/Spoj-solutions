#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	double vol,t,a[6],u,v,w,u1,v1,w1,U,V,W;
	int i,j;
	scanf("%lf",&t);
	for(i=0;i<t;i++)
	{
		for(j=0;j<6;j++)
		scanf("%lf",&a[j]);
		u=a[0];
		v=a[1];
		w=a[2];
		W=a[3];
		V=a[4];
		U=a[5];
		u1=v*v + w*w - U*U;
		v1=w*w + u*u - V*V;
		w1=u*u + v*v - W*W;
		vol=sqrt(4*u*u*v*v*w*w-u*u*u1*u1-v*v*v1*v1-w*w*w1*w1+u1*v1*w1)/12.0;
		printf("%.4lf\n",vol);
	}
	
	return 0;
}
