#include<bits/stdc++.h>
using namespace std;
	    
#define sd(a) scanf("%d",&a)
#define ss(a) scanf("%s",a)
#define slld(a) scanf("%lld",&a);
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
#define MAX 100005
#define wl(t) while(t--)
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
ll n,m;	    
ll tree[4*MAX],lazy[4*MAX];
void propagate(ll i, ll l, ll r){
		tree[i]+=(r-l+1)*lazy[i];
		if(l!=r){
			lazy[2*i+1]+=lazy[i];	
			lazy[2*i+2]+=lazy[i];
		}
	lazy[i]=0;
}
ll rangequery(ll i, ll l, ll r, ll ql, ll qr){
	if(lazy[i])  propagate(i,l,r);
	if(ql>r || qr<l)  return 0;
	if(l>=ql && r<=qr)  return tree[i];
	ll m=l+(r-l)/2;
	return rangequery(2*i+1,l,m,ql,qr)+rangequery(2*i+2,m+1,r,ql,qr);
}
void rangeupdate(ll i, ll l, ll r, ll ql, ll qr, ll val){
	if(lazy[i])  propagate(i,l,r);
	if(ql>r || qr<l)  return ;
	if(l>=ql && r<=qr){
		lazy[i]+=val;
		propagate(i,l,r);
		return ;
	}
	ll m=(l+(r-l)/2);
	rangeupdate(2*i+1,l,m,ql,qr,val);
	rangeupdate(2*i+2,m+1,r,ql,qr,val);
	tree[i]=tree[2*i+1]+tree[2*i+2];
}
int main()
{
	ll t;
	slld(t);
	wl(t){
	memset(lazy,0,sizeof(lazy));
	memset(tree,0,sizeof(tree));
	slld(n); slld(m);
	for (ll i = 0; i < m; ++i)
	        {
	        	/* code */
	        	ll q,l,r,v;
	        	slld(q);
	        	if(q){
	        		slld(l); slld(r);
	        		l--; r--;
	        		ll ans=rangequery(0,0,n-1,l,r);
	        		printf("%lld\n",ans);
	        	}
	        	else{
	        		slld(l); slld(r); slld(v);
	        		l--; r--;
	        		rangeupdate(0,0,n-1,l,r,v);
	        	}
	        }
	}               
    return 0;
}	   