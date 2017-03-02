#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
	// your code goes here
	ll n,c=0,f=0;
	cin>>n;
	map<ll,ll>m;
	while(n--)
	{
		string s;
		ll a;
		cin>>s>>a;
		if(s == "insert")
		{
		  m[a]++;
	    if(m[a] == 1)
		  c++;
		if(m[a] == 2)
		{
			f++;
		}
		}
		else
		{
			if(m[a] > 0)
			{
			m[a]--;
			if(m[a] == 0)
			c--;
			}
			if(m[a] == 1)
			f--;
		
		}
		if(f > 0 && c > 1)
		{
			cout<<"both"<<endl;
		}
		else if(f > 0 && c <= 1)
		{
			cout<<"homo"<<endl;
		}
		else if(f == 0 && c <= 1)
		{
			cout<<"neither"<<endl;
		}
		else
		{
			cout<<"hetero"<<endl;
		}
	}
	return 0;
}