#include<stdio.h>

int main()
{
	double a,b,c,d,t;
	char e;
	scanf("%lf%lf%lf%lf %c",&a,&b,&c,&d,&e);
	if(b>a)
	{
	if(e=='L')
	{
		if(c==d)
		t=0;
		else
		t=(b-a)/(c-d);
	}
	else
	{
		t=(b-a)/(c+d);
	}
	}
	else 
	{
	if(e=='L')
	{
		t=(a-b)/(c+d);
	}
	else
	{
		if(c==d)
		t=0;
		else
		t=(a-b)/(c-d);
	}
	}
	if(t<0)
	{
		printf("Impossible");
	}
	else
	{
		if(t==-0)
		printf("%lf",0.000000);
		else
		printf("%.6lf",t);
	}
	return 0;
}