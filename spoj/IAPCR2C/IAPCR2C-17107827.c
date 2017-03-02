#include<iostream>
using namespace std;

int main()
{
	long long int x,t,n,m,i,freq[1000000],count,a;
	cin>>t;
	x=1;
	while(t--)
	{
		cin>>n>>m;
		for(i=0;i<1000000;i++)
		{
			freq[i]=0;
		}
		for(i=0;i<m;i++)
		{
			cin>>a;
			freq[a]++;
			if(a!=1)
			freq[a-1]++;
			if(a!=n)
			freq[a+1]++;
		}
		count=0;
		for(i=0;i<1000000;i++)
		{
			if(freq[i]!=0)
			{
				count++;
			}
		}
		cout<<"Case "<<x++<<": "<<count<<endl;
	}
	
	return 0;
}