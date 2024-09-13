#include <stdio.h>
#include <stdlib.h>
struct node
{
int info;
struct node* left, *right;
}*root=NULL;
typedef struct node Node;
Node* createnode(int key)
{
Node* newnode = (Node*)malloc(sizeof(Node));
newnode->info = key;
newnode->left = newnode->right = NULL;
return(newnode);
}
int count = 0;
int leafnodes(Node* newnode)
{
if(newnode != NULL)
{
leafnodes(newnode->left);
leafnodes(newnode->right);
if((newnode->left == NULL) && (newnode->right == NULL))
count++;
}
return count;
}
void main()
{
  /*create a tree*/ 
  Node *root 		= createnode(1);
  root->left        = createnode(2);
  root->right       = createnode(3);
  root->left->left  = createnode(4);
  root->left->right = createnode(5);    
  root->left->left->left = createnode(6);
  root->left->left->right = createnode(7);
  printf("Leaf count of the tree is %d", leafnodes(root));
}

