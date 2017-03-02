#include<bits/stdc++.h>
using namespace std;
#define sd(a) scanf("%d",&a)
#define ss(a) scanf("%s",a)
#define sl(a) scanf("%lld",&a)
#define clr(a) memset(a,0,sizeof(a))
#define debug(a) prllf("check%d\n",a)
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define ll long long
#define mset(a,n)  memset(a,n,sizeof(a))
#define mod 1000000007
#define MAX 1005
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<ll,ll> pii;

int main()
{
    int l,i,n,j,m,ans,k;
    int c[MAX],d[MAX],r[MAX],h[MAX],dp[MAX];
    int t,flag=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&l,&n);
        memset(dp,0,sizeof(dp));
        for(i=0;i<n;i++)
        {
            scanf("%d %d %d",&c[i],&r[i],&d[i]);
            for(j=c[i]-r[i]-1;j<c[i]+r[i];j++)
            {
                if((j>=0)&&(j<l))
                {
                  dp[j]+=d[i];
                }

            }
        }
        scanf("%d",&m);
        while(m--)
        {
            scanf("%d",&h[i]);
            flag=0;
            for(j=1;j<=l;j++)
            {

                h[i]-=dp[j-1];

                if(h[i]<=0)
                {flag=1;ans=j;break;}

            }
            if(flag==1)
                {printf("%d\n",ans);}
            else 
                {printf("Bloon leakage\n");}
        }
    }
    return 0;

    }