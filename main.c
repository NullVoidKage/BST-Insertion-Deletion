// C program to demonstrate insert operation in binary search tree.
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int key;
    struct node *left, *right;
};

struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}


void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->key);
        inorder(root->right);
    }
}


struct node* insert(struct node* node, int key)
{

    if (node == NULL) return newNode(key);
    
  
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    

    return node;
}


int main()
{
    
    struct node *root = NULL;
    int arr[] = {1, 20, 12, 4, 5};
    int i;
    for(i=0;i<5;i++){
        root = insert(root, arr[i]);
    }
    inorder(root);
    
    return 0;
}
