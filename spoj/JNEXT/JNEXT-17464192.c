#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			char a;
			cin>>a;
			str+=a;
		}
		bool v=next_permutation(str.begin(),str.end());
		if(v==1)
		cout<<str<<endl;
		else 
		cout<<-1<<endl;
	}
	return 0;
}