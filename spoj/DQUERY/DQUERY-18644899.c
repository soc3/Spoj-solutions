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
#define MAX2 200005
#define MAX3 1000005
#define wl(t) while(t--)
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
int n;
int a[MAX];
int BLOCK;
int cnt[MAX3];
int answer=0;
vector<int>ans(MAX2);
struct node{
	int l,r,i;
};    
struct node q[MAX2];
bool cmp(const struct node& a, const struct node& b){
	if((a.l)/BLOCK != (b.l)/BLOCK)  return (a.l)/BLOCK < (b.l)/BLOCK; 
	return a.r < b.r;
}
void add(int pos){
	cnt[a[pos]]++;
	if(cnt[a[pos]]==1)
		answer++;
}
void remove(int pos){
	cnt[a[pos]]--;
	if(cnt[a[pos]]==0)
		answer--;
}
int main()
{
	sd(n);
	BLOCK=sqrt(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		sd(a[i]);
	}
	int t;
	sd(t);
	int i=0;
	int m=t;
	wl(t){
		int l,r;
		sd(l); sd(r);
		l--; r--;
		q[i].l=l;
		q[i].r=r;
		q[i].i=i;
		i++;
	}
	//sorting queries in the desired order for mo's algorithm (blocks of sizes sqrt(n))
	sort(q,q+m,cmp); 
	//offline algorithm
	int currentL=0,currentR=0;
	add(0);
	for (int i = 0; i < m; ++i)
	{
		/* code */
		int L=q[i].l, R=q[i].r;
		while(currentL < L){
			remove(currentL);
			currentL++;
		}
		while(currentL > L){
			add(currentL-1);
			currentL--;
		}
		while(currentR < R){
			add(currentR+1);
			currentR++;
		}
		while(currentR > R){
			remove(currentR);
			currentR--;
		}
		ans[q[i].i]=answer; 
	}
	for (int i = 0; i < m; ++i)
	{
		/* code */
		printf("%d\n",ans[i]);
	}
    return 0;
}	   
