/*
By sushant oberoi
MNNIT @soc3
*/		
#include<bits/stdc++.h>
using namespace std;
	    
#define sd(a) scanf("%d",&a)
#define sd2(a,b) scanf("%d%d%d",&a,&b)
#define sd3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define slld(a) scanf("%lld",&a)
#define slld2(a,b) scanf("%lld%lld",&a,&b)
#define slld3(a,c) scanf("%lld%lld%lld",&a,&b,&c)
#define ss(a) scanf("%s",a)
#define pd(x) printf("%d",x)
#define pstr(x) printf("%s",x)
#define newl() printf("\n")
#define fl(i,n) for (i=0;i<n;i++)
#define fle(i,n) for (i=1;i<=n;i++)
#define fla(i,a,n) for (i=a;i<n;i++)
#define debug(x) cout<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"
#define all(x) x.begin(), x.end()
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ll long long
#define mset(a,n)  memset(a,n,sizeof(a))  //only for 0, -1
#define fmset(a,n,c)  fill(a,a+n,c)
#define vfmset(v,c) fill(v.begin(),v.end(),c)
#define mod 1000000007
#define MAX 10005
#define gcd __gcd
#define wl(t) while(t--)
#define inf numeric_limits<int>::max()
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define vi vector<int>
#define vl vector<long long>
#define vpii vector<pair<int,int> >
#define vpll vector<pair<long long,long long> >

typedef pair<int,int> pii;
typedef pair<long long, long long> pll;
typedef pair<int,pair<int,int> > piii ;
typedef pair<long long,pair<long long,long long> > plll ;

string convertstring(int n) { stringstream ss; ss << n ; return ss.str(); }
bool prime[MAX];
vector<int>pr;
 void seive(int N)
{
    prime[0]=prime[1]=1;
    for(int i=2;i*i<=N;i++)
    {
        if(!prime[i])
        {
            for(int j=i*i;j<=N;j+=i)
            {
                if(prime[j]==0)
                    prime[j]=i;//lowest prime divisor
            }
        }
    }
}
vector<int>vis(MAX);
map<string,int>dist;
void bfs(int s){
	queue<string>q;
	q.push(convertstring(s));
	dist[convertstring(s)]=0;
	while(!q.empty()){
		string u=q.front();
		q.pop();
		vis[atoi(u.c_str())]=1;
		int n=u.length();
		for (int i = 0; i < n; ++i)
		{
			/* code */
			for(int j=0;j<10;j++){
				string tmp=u;
				if(i==0){
					if(j!=0){
						tmp[i]=j+'0';
					}
				}
				else{
					tmp[i]=j+'0';
				}
				int num=atoi(tmp.c_str());
				string v=convertstring(num);
				if(!prime[num]){
					if(!vis[num])
					{
					   if(dist[u]+1 < dist[v])
					   {
					   q.push(v);
					   	dist[v]=dist[u]+1;
					   }
				    }
				}
			}
		}
	}
}
int main(){
	seive(10000);
    int t;
    sd(t);
    wl(t){
    	for (int i = 0; i < MAX; ++i)
    	{
    		/* code */
    		vis[i]=0;
    		dist[convertstring(i)]=inf;
    	}
    	int s,d;
    	sd(s); sd(d);
    	bfs(s);
    	string tp=convertstring(d);
    	if(dist[tp]>=inf)  pstr("Impossible\n");
    	else  printf("%d\n",dist[tp]);
    }   
	return 0;
}