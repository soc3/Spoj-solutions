#include<stdio.h>
int main()
{
long long t,i,n,j,a[100000],b[100000],k;
scanf("%lld",&t);
for(i=0;i<t;i++)
{
scanf("%lld",&n);
for(j=0;j<n;j++)
scanf("%lld",&a[j]);
b[0]=a[0];
if(a[0]>a[1])
b[1]=a[0];
else
b[1]=a[1];
for(k=2;k<n;k++)
{
if(b[k-1]>a[k]+b[k-2])
b[k]=b[k-1];
else
b[k]=a[k]+b[k-2];
}
printf("Case %lld: %lld\n",i+1,b[n-1]);
}
return 0;
}