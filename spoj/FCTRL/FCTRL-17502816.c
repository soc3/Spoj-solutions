#include <stdio.h>
int main()
{
int T,i;
scanf("%d\n",&T);
for( i=0;i<T;i++)
{   int num;
    scanf("%d\n",&num);
    int divisor=5;
    int count=0;
    while(1){
    int temp=(int)num/divisor;
    if(temp<1)
        break;
    count+=temp;
    divisor*=5;
    }
    printf("%d\n",count);
 
}
   return 0;
} 