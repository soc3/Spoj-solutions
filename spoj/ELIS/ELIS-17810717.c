#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
    int a[n],dp[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		dp[i]=1;
	}
	for(int i=1;i<n;i++)
	{
		for(int j=i-1;j>=0;j--)
		{
			if(a[i]>a[j]&&dp[i]<1+dp[j])
				dp[i]=1+dp[j];
		}
	}
	int max=-1;
	for(int i=0;i<n;i++)
		if(dp[i]>max)
			max=dp[i];
		printf("%d",max);
	return 0;
}