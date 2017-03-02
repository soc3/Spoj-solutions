#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	while(n!=0)
	{
		vector<pair<int,int> >v;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			int x,y;
			scanf("%d%d",&x,&y);
			v.push_back(make_pair(x,y));
		}
		
		
		set<double>s;
		int c=0;
		double INF=std::numeric_limits<double>::infinity();
	    for (int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
			    if(c==0&&(double)(v[j].second-v[i].second)/(v[j].first-v[i].first)==INF||(double)(v[j].second-v[i].second)/(v[j].first-v[i].first)==-INF)
			    {
			        s.insert(INF);
			        c=1;
			    }
			    else if((double)(v[j].second-v[i].second)/(v[j].first-v[i].first)!=INF&&(double)(v[j].second-v[i].second)/(v[j].first-v[i].first)!=-INF)
				s.insert((double)(v[j].second-v[i].second)/(v[j].first-v[i].first));
			}
		}
		printf("%d\n",s.size());
		scanf("%d",&n);
		v.clear();
		s.clear();
	}
	return 0;
}