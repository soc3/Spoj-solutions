#include<bits/stdc++.h>
using namespace std;
	    
#define sd(a) scanf("%d",&a)
#define ss(a) scanf("%s",a)
#define sl(a) scanf("%lld",&a)
#define clr(a) memset(a,0,sizeof(a))
#define debug(a) printf("check%d\n",a)
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define ll long long
#define mod 1000000007
#define MAX 105
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;

string s1,s2;
int n1,n2;	    
unsigned int split(const std::string &txt, std::vector<std::string> &strs, char ch)
{
    unsigned int pos = txt.find( ch );
    unsigned int initialPos = 0;
    strs.clear();

    // Decompose statement
    while( pos != std::string::npos ) {
        strs.push_back( txt.substr( initialPos, pos - initialPos + 1 ) );
        initialPos = pos + 1;

        pos = txt.find( ch, initialPos );
    }

    // Add the last one
    strs.push_back( txt.substr( initialPos, std::min( pos, txt.size() ) - initialPos + 1 ) );

    return strs.size();
}
int main()
{
    string sen;
	while(getline(cin,sen))
	{
	    vector<string>v;
	    split(sen, v, ' ');
	    s1=v[0];
	    s2=v[1];
		n1=s1.length();
		n2=s2.length();
		   int m=n1,n=n2;
		int L[m+1][n+1];
        string X=s1;  string Y=s2;
   /* Following steps build L[m+1][n+1] in bottom up fashion. Note
      that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
   for (int i=0; i<=m; i++)
   {
     for (int j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
 
   // Following code is used to print LCS
   int index = L[m][n];
   int idx=0;
   // Create a character array to store the lcs string
   char lcs[index+1];
   lcs[index] = '\0'; // Set the terminating character
 
   // Start from the right-most-bottom-most corner and
   // one by one store characters in lcs[]
   int i = m, j = n;
   while (i > 0 && j > 0)
   {
      // If current character in X[] and Y are same, then
      // current character is part of LCS
      if (X[i-1] == Y[j-1])
      {
          lcs[index-1] = X[i-1]; // Put current character in result
          i--; j--; index--;     // reduce values of i, j and index
      }
 
      // If not same, then find the larger of two and
      // go in the direction of larger value
      else if (L[i-1][j] > L[i][j-1])
         i--;
      else
         j--;
   }
 		int f1[n1]={0},f2[n2]={0};
		idx=0;
		for(int i=0;i<n1;i++)
        {
            if(s1[i]==lcs[idx])
            {
                f1[i]=1;
                idx++;
            }
		}
		idx=0;
		for(int i=0;i<n2;i++)
        {
            if(s2[i]==lcs[idx])
            {
                f2[i]=1;
                idx++;
            }
		}
		i=0;j=0;
		string ans="";
		while(i<n1||j<n2)
		{
		while(i<n1&&f1[i]==0)
		{
		    ans+=(s1.substr(i,1));
		    i++;
		}
		while(j<n2&&f2[j]==0)
		{
		    ans+=(s2.substr(j,1));
		    j++;
		}
		if(f1[i]==1||f2[j]==1)
		ans+=s1.substr(i,1);
		i++; j++;
		}
		int n3=ans.length();
		for(int i=0;i<n3;i++)
		{
		    if(ans[i]==' ')
		    ans.erase(i,1);
		}
	    cout<<ans<<endl;
	 //   cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
	}        
    return 0;
}	   