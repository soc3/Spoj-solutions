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
#define MAX 1000000
#define slld(a) scanf("%lld",&a)
#define wl(t) while(t--)
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
ll a,b,c;	    
ll gcd(ll a,ll b)
{
    if(b==0) return a;
    else
    return gcd(b,a%b);
}
map<pair<ll,ll>,ll>mp;
ll bfs(){
	queue<pair<pair<ll,ll>,ll> >q;
	q.push(MP(MP(0,0),0));
	mp[MP(0,0)]=1;
	while(!q.empty()){
		pair<pair<ll,ll>,ll>  p=q.front();
		q.pop();
		if(p.first.first==c || p.first.second==c) return p.second;
		mp[MP(p.first.first,p.first.second)]=1;
		if(!mp[MP(p.F.F,b)]){
			q.push(MP(MP(p.F.F,b),p.second+1));
		}
		if(!mp[MP(0,p.F.S)]){
			q.push(MP(MP(0,p.F.S),p.second+1));
		}if(!mp[MP(p.F.F,0)]){
			q.push(MP(MP(p.F.F,0),p.second+1));
		}if(!mp[MP(a,p.F.S)]){
			q.push(MP(MP(a,p.F.S),p.second+1));
		}
		if(!mp[MP(p.F.F+min(a-p.F.F,p.F.S),p.F.S-min(a-p.F.F,p.F.S))])
			q.push(MP(MP(p.F.F+min(a-p.F.F,p.F.S),p.F.S-min(a-p.F.F,p.F.S)),p.second+1));
		if(!mp[MP(p.F.F-min(b-p.F.S,p.F.F),p.F.S+min(b-p.F.S,p.F.F))])
			q.push(MP(MP(p.F.F-min(b-p.F.S,p.F.F),p.F.S+min(b-p.F.S,p.F.F)),p.second+1));
	}
}
int main()
{
	ll t;
	slld(t);
	wl(t){
	    mp.clear();
		slld(a); slld(b); slld(c);
		if(c%gcd(a,b)!=0 || c>max(a,b)){
		    cout<<-1<<endl;
		    continue;
		}
		ll ans=bfs();
		cout<<ans<<endl;
	}
    return 0;
}	   