#include<stdio.h>
int reverse(int n)
{
int a=n,j=1,r,sum=0;
while(a!=0)
{
a/=10;
j*=10;
}
j/=10;
while(n!=0)
{
r=n%10;
sum+=r*j;
j/=10;
n/=10;
}
return sum;
}
int main()
{
int n,num1,num2,i,ans;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d%d",&num1,&num2);
ans=(reverse(reverse(num1)+reverse(num2)));
printf("%d\n",ans);
}
return 0;
}
                                                        
