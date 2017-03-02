#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	char str[1000000];
	
	while(t--)
	{
		cin>>str;
		if(str[strlen(str)-1]=='0'||str[strlen(str)-1]=='5')
		{
			int sum=0;
			int j=0;
			while(j<strlen(str))
			{
				sum+=(str[j]-'0');
				j++;
			}
			if(sum%9==0)
			{
				int sum2=0;
				int j=0;
				
				while(j<strlen(str))
				{
					if(j%2==0)
					{
						sum2+=(str[j]-'0');
						j++;
					}
					else
					{
						sum2-=(str[j]-'0');
						j++;
					}
				}
				
				if(abs(sum2)%11==0)
				{
					cout<<"yes"<<endl;
				}
				else
				{
					cout<<"no"<<endl;
				}
			}
			else
			{
				cout<<"no"<<endl;
			}
		}
		else
		{
			cout<<"no"<<endl;
		}
	}
	
	return 0;
}