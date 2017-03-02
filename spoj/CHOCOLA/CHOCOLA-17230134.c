#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long 
#define M 1000000007
bool compare(const pair<ll,ll>& a,const pair<ll,ll>& b)
    {
    return (a.first>b.first);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ll t,m,n,ma,na;
    char x,y;
    cin>>t;
    while(t--)
        {
        cin>>m>>n;
        vector<pair<ll,char> >v;
        for(ll i=0;i<m-1;i++)
            {
            cin>>ma;
            v.push_back(make_pair(ma,'y'));
        }
        for(ll i=0;i<n-1;i++)
            {
            cin>>na;
            v.push_back(make_pair(na,'x'));
        }
        sort(v.begin(),v.end(),compare);

        
        ll ans=0,xc=1,yc=1;
        for(ll i=0;i<m+n-2;i++)
            {
            if(v[i].second=='x')
                {
                ans+=(v[i].first%M*yc%M)%M;
                xc++;
            }
            else
                {
                ans+=(v[i].first%M*xc%M)%M;
                yc++;
            }
        }
        cout<<(ans%M)<<endl;
    }
    return 0;
}
