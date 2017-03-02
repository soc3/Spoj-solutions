#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int s,c;
	cin>>s;
	while(s!=0)
	{
		c=0;
		while(s>1)
		{
			s/=2;
			c++;
		}
		cout<<c<<endl;
		cin>>s;
	}
	return 0;
}