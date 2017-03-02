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
#define MAX 1000005
#define wl(t) while(t--)
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
int n,q;
int lazy[4*MAX];
struct node{
	int mod0;
	int mod1;
	int mod2;
}tree[4*MAX];

void build(int i, int l, int r){
	if(l==r){
			tree[i].mod0=1;
			tree[i].mod1=0;
			tree[i].mod2=0;
		return ;
	}
	int m=l+(r-l)/2;
	build(2*i+1,l,m);
	build(2*i+2,m+1,r);
	tree[i].mod0=tree[2*i+1].mod0+tree[2*i+2].mod0;
	tree[i].mod1=tree[2*i+1].mod1+tree[2*i+2].mod1;
	tree[i].mod2=tree[2*i+1].mod2+tree[2*i+2].mod2;
}
void func(int i){
	    int a,b,c;
		a=tree[i].mod0;
		b=tree[i].mod1;
		c=tree[i].mod2;
		tree[i].mod0=c;
		tree[i].mod1=a;
		tree[i].mod2=b;
}
void propagate(int i, int l, int r){
	lazy[i]%=3;
	if(lazy[i]==1){
		func(i);
	}
	else if(lazy[i]==2){
		func(i);
		func(i);
	}
	if(l!=r){
		lazy[2*i+1]+=lazy[i];
		lazy[2*i+2]+=lazy[i];
	   }
	lazy[i]=0;
}
int query(int i, int l, int r, int ql, int qr){
	if(lazy[i]){
		propagate(i,l,r);
	}
	if(qr<l || ql>r) return 0;
	if(l>=ql&&r<=qr) return tree[i].mod0;
	int m=l+(r-l)/2;
	return query(2*i+1,l,m,ql,qr)+query(2*i+2,m+1,r,ql,qr);
}	
void updaterange(int i, int l, int r, int ql , int qr){
	if(lazy[i])  propagate(i,l,r);
	if(ql>r || qr<l)  return ;
	if(l>=ql && r<=qr) {
		lazy[i]+=1;
		propagate(i,l,r);
		return ;
	}
	int m=l+(r-l)/2;
	updaterange(2*i+1,l,m,ql,qr);
	updaterange(2*i+2,m+1,r,ql,qr);
	tree[i].mod0=tree[2*i+1].mod0+tree[2*i+2].mod0;
	tree[i].mod1=tree[2*i+1].mod1+tree[2*i+2].mod1;
	tree[i].mod2=tree[2*i+1].mod2+tree[2*i+2].mod2;
}    
int main()
{
	sd(n); sd(q);
	build(0,0,n-1);
	wl(q){
		int t,l,r;
		sd(t); sd(l); sd(r);
		if(t){
			int ans=query(0,0,n-1,l,r);
			printf("%d\n",ans);
		}
		else{
			updaterange(0,0,n-1,l,r);
		}
	}
    return 0;
}	   