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
#define mset(a,n)  memset(a,n,sizeof(a))
#define mod 1000000007
#define MAX 10000000
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
typedef pair<int,int> pii;
int n,q;	
int a[MAX];    
int tree[MAX];
void build(int node, int start, int end)
{
	if(start==end)
	{
	    //leaf node will have a single element
	     tree[node]=a[start];
	    //here only a tree array is considered but other problems
	    //can require you to make a node structure to store other relevant information with the value of that node
	}
	else
	{
	     int mid=(start + (end-start)/2);
	     //recurse on left child
	     build(2*node,start,mid); //if indexing starts from 1
	     //recurse on right child 
	     build(2*node+1,mid+1,end);
	     //internal node will have the sum of both the children (here)
	     tree[node]=min(tree[2*node],tree[2*node+1]);
	     //for other questions you have to build a merge function here which is sum which would
	     //be unique to each problem
	     //example-> merge(tree[2*node],tree[2*node+1])
	     /*merge(int a, int b)
	     {
	        tree[node]=a+b
	           or it can store
	        tree[node]=min(a,b);   
	     }*/
	}
}
int query(int node,int start,int end, int l, int r)
{
	if(r<start || end<l)
	{
	   //range represented by the node is completely outside the given range
	   return INT_MAX;
	}
	if(l<=start && end<=r)
	{
	   //range represented by a node is completely inside the given range
	   return tree[node];
	}
	//there is a partial overlap
	int mid=start+(end-start)/2;
	int q1=query(2*node,start,mid,l,r);
	int q2=query(2*node+1,mid+1,end,l,r);

	return min(q1,q2);
	//we have to return the merge function of the queries -> merge(q1,q2);
}
int main()
{
    int t;
    sd(t);
    int x=1;
    while(t--)
    {
        mset(tree,0);
        mset(a,0);
    	printf("Scenario #%d:\n",x++);
    	sd(n); sd(q);
    	for (int i = 0; i < n; ++i)
    	   sd(a[i]);
    	build(1,0,n-1);
    	while(q--)
    	{
    		int l,r;
    		sd(l); sd(r);
    		l--; r--;
    		int ans=query(1,0,n-1,l,r);
    		printf("%d\n", ans);
    	}
    }	        
    return 0;
}	   