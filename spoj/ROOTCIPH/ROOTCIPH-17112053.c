#include<stdio.h>

int main()
{
  unsigned long long int a,b,c,d;
  int t,i;
  scanf("%d",&t);
  for (i = 0 ; i < t ; i++)
  {
    scanf("%llu%llu%llu",&a,&b,&c);
    d = (a*a) - (2*b);
    printf("%llu\n",d);
  }
  return 0;
}