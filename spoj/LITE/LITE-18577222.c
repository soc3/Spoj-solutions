#include<bits/stdc++.h>
using namespace std;
	    
#define sd(a) scanf("%d",&a)
#define ss(a) scanf("%s",a)
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
int n,m;	    
int tree[4*MAX],lazy[4*MAX];
void propagate(int i, int l, int r){
	if(lazy[i]%2){
		tree[i]=(r-l+1)-(tree[i]);
		if(l!=r){
			lazy[2*i+1]+=lazy[i];
			lazy[2*i+2]+=lazy[i];
		}
	}
	lazy[i]=0;
}
ll rangequery(int i, int l, int r, int ql, int qr){
	if(lazy[i])  propagate(i,l,r);
	if(ql>r || qr<l)  return 0;
	if(l>=ql && r<=qr)  return tree[i];
	int m=l+(r-l)/2;
	return rangequery(2*i+1,l,m,ql,qr)+rangequery(2*i+2,m+1,r,ql,qr);
}
void rangeupdate(int i, int l, int r, int ql, int qr){
	if(lazy[i])  propagate(i,l,r);
	if(ql>r || qr<l)  return ;
	if(l>=ql && r<=qr){
		lazy[i]++;
		propagate(i,l,r);
		return ;
	}
	int m=(l+(r-l)/2);
	rangeupdate(2*i+1,l,m,ql,qr);
	rangeupdate(2*i+2,m+1,r,ql,qr);
	tree[i]=tree[2*i+1]+tree[2*i+2];
}
int main()
{
	sd(n); sd(m);
	for (int i = 0; i < m ; ++i)
	        {
	        	/* code */
	        	int q,l,r;
	        	sd(q); sd(l); sd(r);
	        	l--; r--;
	        	if(q){
	        		ll ans=rangequery(0,0,n-1,l,r);
	        		cout<<ans<<endl;
	        	}
	        	else{
	        		rangeupdate(0,0,n-1,l,r);
	        	}
	        }        
    return 0;
}	   