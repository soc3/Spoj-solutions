#include <stdio.h>

int main(void) {
float a,b,c;
scanf("%f%f%f",&a,&b,&c);
while(a!=0||b!=0||c!=0)
{
	if(b-a==c-b)
	{
		printf("AP %.0f\n",c+b-a);
	}
	else
	{
		printf("GP %.0f\n",c*b/a);
	}
	scanf("%f%f%f",&a,&b,&c);
}
	return 0;
}