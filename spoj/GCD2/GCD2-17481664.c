#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}

int main()
{
	int t,a;
	char b[1000000];
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a==0)
		{
			cout<<b<<endl;
			continue;
		}
		else
		{
			int num=0,i=0;
			int len=strlen(b);
			for(i=0;i<len;i++)
			{
				num=(num*10+b[i]-'0')%a;
			}
			cout<<gcd(a,num)<<endl;
		}
	}
	return 0;
}