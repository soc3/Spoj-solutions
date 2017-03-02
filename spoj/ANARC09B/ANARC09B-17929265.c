#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,m;
	while(1)
	{
		scanf("%lld%lld",&n,&m);
		if(n==0&&m==0)
			break;
	    if(((m%n)==0)||((n%m)==0))
	    {
	        long long a=n/min(n,m);
	        long long b=m/min(n,m);
	        printf("%lld\n",a*b);
	    }
	    else
	    printf("%lld\n",n*m);
	}
	return 0;
}