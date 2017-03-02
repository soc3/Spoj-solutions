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
#define MAX 30005
#define wl(t) while(t--)
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
int n;
string s;	    
struct node{
	int o,c;
};
struct node tree[4*MAX];
void build(int i, int l, int r){
	if(l==r){
		if(s[l]=='('){
			tree[i].o=1;
			tree[i].c=0;
		}
		else{
			tree[i].c=1;
			tree[i].o=0;
		}
		return ;
	}
	int m=l+(r-l)/2;
	build(2*i+1,l,m);
	build(2*i+2,m+1,r);
	int bal=min(tree[2*i+1].o,tree[2*i+2].c);
	tree[i].o=tree[2*i+1].o+tree[2*i+2].o-bal;
	tree[i].c=tree[2*i+1].c+tree[2*i+2].c-bal;
}
void update(int i, int l, int r, int idx){
	if(idx<l || idx>r)
		return ;
	if(idx==l && l==r){
		int a=tree[i].o;
		int b=tree[i].c;
		tree[i].o=b;
		tree[i].c=a;
		return ;
	}
	int m=l+(r-l)/2;
	update(2*i+1,l,m,idx);
	update(2*i+2,m+1,r,idx);
	int bal=min(tree[2*i+1].o,tree[2*i+2].c);
	tree[i].o=tree[2*i+1].o+tree[2*i+2].o-bal;
	tree[i].c=tree[2*i+1].c+tree[2*i+2].c-bal;	
}
bool check(){
	if(tree[0].o==0 && tree[0].c==0)
		return 1;
	return 0;
}
int main(){
	for (int i = 0; i < 10; ++i)
	{
		/* code */
		printf("Test %d:\n",i+1);
		sd(n);
		cin>>s;
		build(0,0,n-1);
		int m;
		sd(m);
		wl(m){
			int i;
			sd(i);
			i--;
			if(i==-1){
				bool ans=check();
				if(ans)
					printf("YES\n");
				else
					printf("NO\n");
			}
			else{
				update(0,0,n-1,i);
			}
		}
	}
	return 0;
}	   