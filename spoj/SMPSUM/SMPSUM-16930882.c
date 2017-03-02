#include <stdio.h>

int main(void) {
	// your code here
    int a,b,i,sum=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
    	sum+=i*i;
    }
    printf("%d",sum);
	return 0;
}