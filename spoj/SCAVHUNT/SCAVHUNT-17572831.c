#include<bits/stdc++.h>
using namespace std;
 
 
#define MAX 200005
#define ll long long
#define upperlimit 1000100
#define INF 1e18
#define eps 1e-8
#define pcc pair<char,char>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define tr(container,it) for(typeof(container.begin()) it=container.begin();it!=container.end();it++)
#define MOD 1000000007
#define slld(t) scanf("%lld",&t)
#define sd(t) scanf("%d",&t)
#define ss(t) scanf("%s",t)
#define pd(t) printf("%d\n",t)
#define ps(t) cout<<t<<"\n"
#define plld(t) printf("%lld\n",t)
#define mp(a,b) make_pair(a,b)
#define FF first
#define SS second
#define pb(x) push_back(x)
#define vi vector<int>
#define clr(a) memset(a,0,sizeof(a))
#define debug(a) printf("check%d\n",a)
 
int main()
{
	int t,n;
	sd(t);
	int k = 1;
	while(t--)
	{
		cout<<"Scenario #"<<k++<<":"<<endl;
		sd(n);
 
		set<string>s;
		vector<string>v2;
		map<string,string>m;
		for (int i = 0; i < n-1; ++i)
		{
			string a , b;
			cin>>a>>b;
			s.insert(a);
			s.insert(b);
			m[a] = b;
			v2.push_back(b);
		}
		//	cout<<"hello\n";
		int c = 0;
		set<string>:: iterator it;
		std::vector<string>:: iterator io;
		for(it=s.begin(); it!=s.end();it++)
		{
			io = find(v2.begin(), v2.end(), *it);
			if(io == v2.end())
			{
				break;
			}
		}
		ps(*it);
		ps(m[*it]);
		c+=2;
 
	//	cout<<"start = "<<m[*it]<<"\n";
 
 
 
		map<string, string>:: iterator ii = m.find(m[*it]);
 
	//	for(ii=m.begin();ii!=m.end();ii++)
	//		cout<<ii->first<<" , "<<ii->second<<"\n";
	//	
	//	if(ii==m.end())
	//		cout<<"end";
 
	//	exit(0);
 
		while(c != n)
		{
 
			ps(ii->second);	
			c++;
			ii = m.find(ii->second);
		//	break;			
		}
		cout<<endl;
	}
	return 0;
}