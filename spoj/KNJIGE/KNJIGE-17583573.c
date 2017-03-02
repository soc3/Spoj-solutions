#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int c=n,swap=0;
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]==c)  c--;
		else
			swap++;
	}
	printf("%d",swap);
	return 0;
}