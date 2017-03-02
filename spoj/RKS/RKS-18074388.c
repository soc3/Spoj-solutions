#include<bits/stdc++.h>
using namespace std;
	    
#define sd(a) scanf("%d",&a)
#define ss(a) scanf("%s",a)
#define sl(a) scanf("%lld",&a)
#define clr(a) memset(a,0,sizeof(a))
#define debug(a) printf("check%d\n",a)
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define ll long long
#define mset(a,n)  memset(a,n,sizeof(a))
#define mod 1000000007
#define MAX 1000000
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
map<int,int>cnt;
map<int,int>pos;
bool cmp(const int& a,const int& b)
{
    if(cnt[a]==cnt[b])
       return pos[a]<pos[b];
    else
       return cnt[a]>cnt[b];
}
int main()
{
	int n,c;
	sd(n);  sd(c);
	int a[n];
	for(int i=0;i<n;i++)
	{
	    sd(a[i]);
	    cnt[a[i]]++;
	    if(pos.find(a[i])==pos.end())
	    pos[a[i]]=i;
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
	  printf("%d ",a[i]);
    return 0;
}	   