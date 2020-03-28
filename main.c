
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}


void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->data);
        inorder(root->right);
    }
}


struct node* insert(struct node* node, int data)
{

    if (node == NULL) return newNode(data);
    
  
    if (key < node->data)
        node->left = insert(node->left, data);
    else if (key > node->data)
        node->right = insert(node->right, data);
    

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
