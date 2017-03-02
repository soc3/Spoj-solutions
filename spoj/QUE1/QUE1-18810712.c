#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sd(a) scanf("%d",&a)
#define slld(a) scanf("%lld",&a)
#define fl(i,a,b) for(int i=a;i<b;i++)
#define fle(i,a,b) for(int i=a;i<=b;i++)
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define wl(t) while(t--)
#define mod 1000000007
#define MAX 1000000
#define PB push_back
#define MP make_pair
#define fi first
#define se second

int main()
{
	int t;
	sd(t);
	wl(t){
		int n;
		sd(n);
		int a[n],b[n];
		vector<pair<int,int> >v;
		fl(i,0,n)
		sd(a[i]);
		fl(i,0,n)
		sd(b[i]);
		fl(i,0,n)
		v.PB(MP(a[i],b[i]));
		sort(v.begin(),v.end());
		for(int i=n-1;i>=0;i--){
			int tmp=v[i].se;
			int to=n-1-v[i].se;
			int j=i;
			while(j!=to){
				int temp=v[j].fi;
				v[j].fi=v[j+1].fi;
				v[j+1].fi=temp;
				j++;
			}
		}
		for(int i=n-1;i>=0;i--)
			cout<<v[i].fi<<" ";
		cout<<endl;
	}
    return 0;
}	   