#include <stdio.h>

int main(void) {
	// your code here
	int i,d,c,t;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&c,&d);
		if((c&1)&&(c==d||c==d+2))
		{
			printf("%d\n",c+d-1);
		}
		else if((!(c&1))&&(c==d||c==d+2))
		{
			printf("%d\n",c+d);
		}
		else
		printf("No Number\n");
		
	}
	return 0;
}