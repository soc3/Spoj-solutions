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
#define MAX 10005
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
int n;
int a[MAX];
int bit[MAX];	    
void updateBIT(int index, int val)
{
    // index in BITree[] is 1 more than the index in arr[]
    index = index + 1;
 
    // Traverse all ancestors and add 'val'
    while (index <= n)
    {
       // Add 'val' to current node of BI Tree
       bit[index] += val;
 
       // Update index to that of parent in update View
       index += index & (-index);
    }
}
void create()
{
for(int i=0;i<n+1;i++)
	bit[i]=0;	
for (int i=0; i<n; i++)
    updateBIT(i, a[i]);
}
int query(int index)
{
    int sum = 0; // Iniialize result
 
    // index in BITree[] is 1 more than the index in arr[]
    index = index + 1;
 
    // Traverse ancestors of BITree[index]
    while (index>0)
    {
        // Add current element of BITree to sum
        sum += bit[index];
 
        // Move index to parent node in getSum View
        index -= index & (-index);
    }
    return sum;
}
int main()
{
	int t;
    sd(t);
    while(t--)
    {
    memset(a,0,sizeof(a));
    memset(bit,0,sizeof(bit));
    int u;
    sd(n); sd(u);
    //create();
    while(u--)
    {
    	int l,r,val;
    	sd(l);  sd(r);  sd(val);
    	//updating a range
        updateBIT(l,val);
        updateBIT(r+1,-val);
    }
    int q;
    sd(q);
    while(q--)
    {
    	int i;
    	sd(i);
    	int ans=query(i);
    	printf("%d\n",ans);
    }
    }        
    return 0;
}	   