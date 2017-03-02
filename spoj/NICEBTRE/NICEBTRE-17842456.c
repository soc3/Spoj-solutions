#include<bits/stdc++.h>
using namespace std;
char s[1000000];
int i;
int rec()
{
    if(s[i]=='\0')
    return 0;
    if(s[i]=='l')
    return 0;
    else 
    {
    i++;
    int l=rec();
    i++;
    int r=rec();
    return 1+max(l,r);
    }
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    i=0;
	    scanf("%s",s);
	    //n=strlen(s);
	    int ans=rec();
	    printf("%d\n",ans);
	}
	return 0;
}