#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,i,c1;
	char temp[10]="lxh";
	char str[100];
	cin>>t;
	while(t--)
	{
		cin>>n;
		c1=0;
		for(i=0;i<n;i++)
		{
			cin>>str;
			if(strcmp(str,temp)==0)
			c1++;
		}
		if(c1%2==0)
		{
			cout<<"hhb"<<endl;
		}
		else
		{
			cout<<"lxh"<<endl;
		}
	}
	return 0;
}