#include <stdio.h>

int main(void) {
	// your code here
long long i,t;
unsigned long long int n;
scanf("%lld",&t);
for(i=0;i<t;i++)
{
	scanf("%llu",&n);
	printf("%llu\n",(2*n*n-n+1));
}
	return 0;
}