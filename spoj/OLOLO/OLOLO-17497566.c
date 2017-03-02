#include <stdio.h>

int main(void) {
	// your code goes here
	long long int t,n,ans,i;
	scanf("%lld",&t);
	scanf("%lld",&n);
	ans=n;
	for(i=0;i<t-1;i++)
	{
		scanf("%lld",&n);
		ans^=n;
	}
	printf("%lld",ans);
	return 0;
}
