#include<bits/stdc++.h>
using namespace std;
void computeLPSarray(string pat,int* lps)
{
	int j=0;//length of the previous longest prefix suffix
	int i;
	lps[0]=0;
	i=1;
	int n=pat.length();
	while(i<n)
	{
	   if(pat[j]==pat[i])
	   {
	     lps[i]=j+1;
	     i++; j++;
	   }
	   else
	   {
	     if(j!=0)
	     {
	      j=lps[j-1];// important step
	     }
	     else
	     {
	      lps[i]=0;
	      i++;
	     }
	   }
	}
}
int ans;
void patternSearch(string pat, string text, int* lps)
{
	int pat_index=0,text_index=0;
	if(pat.length()==0)
	return ;
	while(text_index < text.length())
	{
	  //if characters match look for next character match
	  if(pat[pat_index]==text[text_index])
	  {
	    pat_index++; text_index++;

	    //indictes that complete pattern has matched	    
	    if(pat_index==pat.length())
	    {
	     ans=1;
	     return ; 
	     pat_index=lps[pat_index-1];
	    }
	  }
	  else
	  {
	    //if the characters do not match, don't go back in the text. just adjust the pattern index
	    if(pat_index!=0)
	    {
           pat_index=lps[pat_index-1];
	    }
	    else
	    {
	      //right shifting the pattern is equivalent to textindex++
	       text_index++;
	    }
	  }
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[n];
		string text,pat;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(i!=0)
			{
				if(a[i]>a[i-1])
					text+="G";
				else if(a[i]<a[i-1])
					text+="L";
				else
					text+="E";
			}
		}
		int lps[n];
		cin>>pat;
		computeLPSarray(pat,lps);
		ans=0;
		patternSearch(pat,text,lps);
		if(ans==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}