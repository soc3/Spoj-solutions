#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int n,i,k;
	char str[100],str2[100];
	cin>>n;
	while(n--)
	{
		cin>>str;
		k=0;
		for(i=strlen(str)-1;i>=0;i--)
		{
			str2[k++]=str[i];
		}
		str2[k]='\0';
		if(!strcmp(str,str2))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}