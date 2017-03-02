#include <stdio.h>

int main(void) {
  long long int t,i,n;
  scanf("%lld",&t);
  for(i=0;i<t;i++)
  {
  	scanf("%lld",&n);
  	printf("%lld\n",n*(n+2)*(2*n+1)/8);
  }
	return 0;
}