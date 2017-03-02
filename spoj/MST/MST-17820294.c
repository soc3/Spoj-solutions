#include<bits/stdc++.h>
using namespace std;
vector< pair<pair<int,int> , int > >v;
vector<int>disj;
void init(int n)
{
	disj.assign(n, 0);
	for(int i=0;i<n;i++)
	{
		disj[i]=i;
	}
}
int find_set(int i)
{
	if(disj[i]==i)
		return i;
	return disj[i]=find_set(disj[i]);
}
void joinset(int i, int j)
{
	disj[find_set(i)]=find_set(j);
}
int issameset(int i, int j)
{
	return find_set(i)==find_set(j);
}
//vector<vector<pair<int,int> >v;
bool cmp(const pair<pair<int,int >,int>&  a, pair<pair<int,int>,int>& b)
{
	return a.second<b.second;
}
int main()
{
	// by disjoint sets
	// MST
	int n,m;
	scanf("%d%d",&n,&m);
	init(n);
	int mm=m;
	while(m--)
	{
		int a,b,w;
		scanf("%d%d%d",&a,&b,&w);
        v.push_back(make_pair(make_pair(a,b),w));
		//v[a].push_back(make_pair(b,w));
        //i++;
	}
	long sum=0;
	sort(v.begin(),v.end(),cmp);
    for(int i=0;i<mm;i++)
    {
    	if(!issameset(v[i].first.first,v[i].first.second))
    	{ 
           joinset(v[i].first.first,v[i].first.second);
           sum+=v[i].second;
    	}
    }
    printf("%ld",sum); 
	return 0;
}