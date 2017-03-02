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
int tree[4*MAX];
int lazy[4*MAX];
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
	     tree[node]=tree[2*node]+tree[2*node+1];
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
void updateRange(int node, int start, int end, int l, int r, int val)
{
    //step 1
    //if current segtree node has any pending update then first add that pending update to current node 
	if(lazy[node]!=0)
	{
	    //this node needs to be updated
	    tree[node]+=(end-start+1)*lazy[node];//update it
	    if(start!=end) //if this is not a leaf node
	    {
	        lazy[2*node]+=lazy[node];
	        lazy[2*node+1]+=lazy[node];
	        //mark childs as lazy
	    }
	    lazy[node]=0;
	    //reset it;
	}
	//step 2 (check ranges)
	//current segment is not within the range [l,r]
	if(start>end||start>r||end<l)
	return ;
	if(start>=l&&end<=r)
	{
	    //segment is fully within the range
	    tree[node]+=(end-start+1)*val;//unique for each question
	    if(start!=end)
	    {
	       //not leaf node
	       lazy[2*node]+=val;
	       lazy[2*node+1]+=val;
	    } 
	    return ;
	}
	//step3 simple as we do in earlier update function 
	int mid=start+(end-start)/2;
	//updating left child
	updateRange(2*node,start,mid,l,r,val);
	//updating right child
	updateRange(2*node+1,mid+1,end,l,r,val);
	tree[node]=tree[2*node]+tree[2*node+1];//updating root
}
//query range after lazy updates
//                       important point
//since we have changed the update function to postpone the update operation, we will have to change the query funtion also.
//the only change we need to make is to check if there is a pending update operation on that node. if there is a pending update operation,
//first update the node and then work same as the earlier query function
int queryRange(int node,int start,int end,int l, int r)
{
	if(start>end||start>r||end<l)
	   return 0;   //out of range
	if(lazy[node]!=0)
	{
	   //this node needs to be updated
	   tree[node]+=(end-start+1)*lazy[node];   //update it
	   if(start!=end)
	   {
	      lazy[2*node]+=lazy[node];
	      //mark childs as lazy
	      lazy[2*node+1]+=lazy[node];
	   }
	   lazy[node]=0;
	   //reset it
	}   
	//current segment is totally within range [l,r]
	if(start>=l&&end<=r)
	return tree[node];
	int mid=start+(end-start)/2;
	int q1=queryRange(2*node,start,mid,l,r);//query left child
	int q2=queryRange(2*node+1,mid+1,end,l,r); // query right child
	return q1+q2;
	// here we return the merge function of the queries  //we will return the sum of its left and right child
}
int main()
{
    int t;
    sd(t);
    while(t--)
    {
    memset(lazy,0,sizeof(lazy));    
    memset(a,0,sizeof(a));
    memset(tree,0,sizeof(tree));	
    int u;
    sd(n); sd(u);
    build(1,0,n-1);
    while(u--)
    {
    	int l,r,val;
    	sd(l);  sd(r);  sd(val);
    	updateRange(1,  0, n-1, l, r, val);
    }
    int q;
    sd(q);
    while(q--)
    {
    	int i;
    	sd(i);
    	int ans=queryRange(1,0,n-1,i,i);
    	printf("%d\n",ans);
    }
    }
    return 0;
}	   