/* program to construct tree using inorder and preorder traversals */
#include<bits/stdc++.h>
using namespace std;
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node
{
  int data;
  struct node* left;
  struct node* right;
};
 
/* Prototypes for utility functions */
int search(int arr[], int strt, int end, int value);
struct node* newNode(int data);
 
/* Recursive function to construct binary of size len from
   Inorder traversal in[] and Preorder traversal pre[].  Initial values
   of inStrt and inEnd should be 0 and len -1.  The function doesn't
   do any error checking for cases where inorder and preorder
   do not form a tree */
struct node* buildTree(int in[], int pre[], int inStrt, int inEnd)
{
  static int preIndex = 0;
 
  if(inStrt > inEnd)
     return NULL;
 
  /* Pick current node from Preorder traversal using preIndex
    and increment preIndex */
  struct node *tNode = newNode(pre[preIndex++]);
 
  /* If this node has no children then return */
  if(inStrt == inEnd)
    return tNode;
 
  /* Else find the index of this node in Inorder traversal */
  int inIndex = search(in, inStrt, inEnd, tNode->data);
 
  /* Using index in Inorder traversal, construct left and
     right subtress */
  tNode->left = buildTree(in, pre, inStrt, inIndex-1);
  tNode->right = buildTree(in, pre, inIndex+1, inEnd);
 
  return tNode;
}
 
/* UTILITY FUNCTIONS */
/* Function to find index of value in arr[start...end]
   The function assumes that value is present in in[] */
int search(int arr[], int strt, int end, int value)
{
  int i;
  for(i = strt; i <= end; i++)
  {
    if(arr[i] == value)
      return i;
  }
}
 
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* newNode(int data)
{
  struct node* node = (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
 
  return(node);
}
vector<int>post2; 
/* This funtcion is here just to test buildTree() */
void printInorder(struct node* node)
{
  if (node == NULL)
     return;
 
  /* first recur on left child */
  printInorder(node->left);

  /* now recur on right child */
  printInorder(node->right);
   /* then print the data of node */
   post2.push_back(node->data);
}
 
/* Driver program to test above functions */
int main()
{
  int n;
  scanf("%d",&n);
  int in[n] ;
  int pre[n];
  int post[n];
  for(int i=0;i<n;i++)
    scanf("%d",&pre[i]);
  for(int i=0;i<n;i++)
    scanf("%d",&post[i]);
  for(int i=0;i<n;i++)
    scanf("%d",&in[i]);
  struct node *root = buildTree(in, pre, 0, n - 1);
  printInorder(root);
  int f=0;
  for(int i=0;i<n;i++)
    if(post[i]!=post2[i])
    {
      f=1;
      break;
    }
    if(f)
      cout<<"no"<<endl;
    else
      cout<<"yes"<<endl;
}