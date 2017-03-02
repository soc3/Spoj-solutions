#include<bits/stdc++.h>
using namespace std;
string s;
int n;

int main()
{
	int x=1;
	while(1)
	{
		//memset(dp,-1,sizeof(dp));
		cin>>s;
		if(s[0]=='-')
			break;
		n=s.length();
		int ans=0;
		stack<char>st;
		for(int i=0;i<n;i++)
		{
		    if(st.empty()&&s[i]=='}')
		    {
		    ans++;    
		    st.push('{');
		    }
		    else if(s[i]=='{')
		    st.push('{');
		    else
		    st.pop();
		}
		ans+=(st.size()/2);
		printf("%d. %d\n",x++,ans);
	}
	return 0;
}