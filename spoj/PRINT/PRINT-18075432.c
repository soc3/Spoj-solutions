#include <bits/stdc++.h>
using namespace std;

#define MAX 1000005
#define LMT 1000005
#define LEN 1000005
#define RNG 1000005
#define ll long long
ll base[MAX/64], segment[RNG/64], primes[LEN];

#define sq(x) ((x)*(x))
#define mset(x,v) memset(x,v,sizeof(x))
#define chkC(x,n) (x[n>>6]&(1<<((n>>1)&31)))
#define setC(x,n) (x[n>>6]|=(1<<((n>>1)&31)))
#define sd(n) scanf("%d",&n)
#define sl(n) scanf("%lld",&n)
/* Generates all the necessary prime numbers and marks them in base[]*/
void sieve()
{
     ll i, j, k;
    for(i=3; i<LMT; i+=2)
        if(!chkC(base, i))
            for(j=i*i, k=i<<1; j<MAX; j+=k)
                setC(base, j);
    for(i=3, j=0; i<MAX; i+=2)
        if(!chkC(base, i))
            primes[j++] = i;
}

/* Returns the prime-count within range [a,b] and marks them in segment[] */
void segmented_sieve(ll a, ll b)
{
    ll i, j, k, cnt = (a<=2 && 2<=b)? 1 : 0;
    if(b<2) return ;
    if(a<3) a = 3;
    if(a%2==0) a++;
    mset(segment,0);
    for(i=0; sq(primes[i])<=b; i++)
    {
        j = primes[i] * ( (a+primes[i]-1) / primes[i] );
        if(j%2==0) j += primes[i];
        for(k=primes[i]<<1; j<=b; j+=k)
            if(j!=primes[i])
                setC(segment, (j-a));
    }
    for(i=0; i<=b-a; i+=2)
        if(!chkC(segment, i))
            {
                printf("%lld\n",a+i);
            }
}
int main()
{
	int t;
	sd(t);
	sieve();
	while(t--)
	{
		ll a,b;
		sl(a); sl(b);
		if(a<=2&&b>=2)
		printf("2\n");
		segmented_sieve(a,b);
	}
	return 0;
}