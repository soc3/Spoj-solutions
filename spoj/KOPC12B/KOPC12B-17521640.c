#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ll long long 
ll fact[10000008];
ll pow2(ll a,ll b)
{
    if(b==0)
        return 1;
    ll temp=pow2(a,b/2);
    if(b%2==0)
        return (temp*temp)%M;
    return (((temp*temp)%M)*a)%M;

}
int main()
{
	fact[0]=1;
	for(int i=1;i<10000000;i++)
	{
		fact[i]=(i*fact[i-1])%M;
	}
	int t;
	scanf("%d",&t);
	
    int b=pow2(2,M-2);
	while(t--)
	{
	    int n;
		scanf("%d",&n);
		ll a=pow2(fact[n],M-2);
		ll ans=((((fact[2*n]*a)%M*a)%M*(n%M))%M*b)%M;
		printf("%lld\n",(ans));
	}
	return 0;
}