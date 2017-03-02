#include <stdio.h>
#include <stdlib.h>
#include<string.h>
 
int main(int argc, char *argv[]) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char c;
		c=getchar();
		char expr[400],pol[400],op[400];
		int i,k=0,l=0;
		gets(expr);
		for(i=0;i<strlen(expr);i++)
		{
			if(expr[i]=='(');
			else if(expr[i]=='+'||expr[i]=='-'||expr[i]=='*'||expr[i]=='/'||expr[i]=='^'||expr[i]=='%')
			{
				op[k]=expr[i];
				k++;
			}
			else if(expr[i]==')')
			{
				pol[l]=op[k-1];
				l++;
				k--;
			}
			else
			{
				pol[l]=expr[i];
				l++;
			}
			
		}
		pol[l]='\0';
		printf("%s\n",pol);
	}
	return 0;
} 

