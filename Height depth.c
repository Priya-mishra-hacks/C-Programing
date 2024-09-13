//Height/Depth of a binary tree
#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node* left, *right;
}* root=NULL;
typedef struct node Node; 
/* Compute the "maxDepth" of a tree -- the number of nodes along the longest path 
from the root node down to the farthest leaf node.*/

int maxDepth(Node* node)
{
	int r;
	int lDepth, rDepth;
    if (node == NULL)
        return 0;
    else 
	{
        /* compute the depth of each subtree */
        lDepth = maxDepth(node->left);
        rDepth = maxDepth(node->right);
   		r = (lDepth > rDepth)? (lDepth + 1) : (rDepth + 1);
        return r;
    }
}

Node* newNode(int data)
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->data = data;
    n->left = n->right = NULL; 
    return (n);
}
 
void main()
{
    Node* root = newNode(1); 
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->left->left = newNode(6);
    printf("Height of tree is %d", maxDepth(root));}

