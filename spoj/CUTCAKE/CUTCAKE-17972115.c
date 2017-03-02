#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll cut(ll n)
{
    ll i=3,a;
    if(n<=1){return 0;}
    if(n==2){return 1;}
    else
    {
      a=2;
      while(i<=n)
      {
        i+=a;
        if(i>n){break;}
        a++;
      }
      return a;
    }
}
int main()
{
    ll t,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("%lld\n",cut(n));
    }
    return 0;
}
