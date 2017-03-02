#include <stdio.h>

int main(void) {
	long long i,a[100000];
	for(i=0;i<100000;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=0;i<100000;i++)
	{
		if(a[i]==42)
		break;
		printf("%lld\n",a[i]);
	}
	return 0;
}