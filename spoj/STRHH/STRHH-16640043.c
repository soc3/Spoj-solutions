#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	long long t,i,j,c;
	char str[200][200];
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%s",str[i]);
	    c=(strlen(str[i]))/2;
	    for(j=0;j<c;j+=2)
	    printf("%c",str[i][j]);
	    printf("\n");
	}
	return 0;
}
