#include<bits/stdc++.h>
using namespace std;
#define MAX 10000000
#define ll long long
ll segtree[MAX],input[MAX];
void update(ll* segtree, int l, int r, int idx, int val,int pos)
{
	if(l==r)
	{
	    input[idx]+=val;
	    segtree[pos]+=val;
	}
	else
	{
	    int mid=(l+r)/2;
	    if(idx>=l&&idx<=mid)
	    update(segtree,l,mid,idx,val,2*pos+1);
	    else
	    update(segtree,mid+1,r,idx,val,2*pos+2);
	    segtree[pos]=segtree[2*pos+1]+segtree[2*pos+2];
	}
}
long long query(long long* segtree,int l, int r, int ql, int qr, int pos)
{
	//no overlap
	if(qr<l||ql>r)
		return 0;
	//totol overlap
	if(ql<=l&&qr>=r)
		return segtree[pos];
	int mid=(l+r)/2;
	return query(segtree,l,mid,ql,qr,2*pos+1)+query(segtree,mid+1,r,ql,qr,2*pos+2);
}
int main()
{
	int n,q;
	scanf("%d%d",&n,&q);
	memset(segtree,0,sizeof(segtree));
	memset(input,0,sizeof(input));
	while(q--)
	{
		char s[10],sp;
		int x,y;
		scanf("%s%c%d%d",&s,&sp,&x,&y);
		if(strcmp(s,"find")==0)
		{
			x--; y--;
			ll ans=query(segtree,0,n-1,x,y,0);
			printf("%lld\n",ans);
		}
		else
		{
			x--;
			update(segtree,0,n-1,x,y,0);
		}
	}
	return 0;
}