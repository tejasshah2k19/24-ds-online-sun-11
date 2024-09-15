#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *addNode(struct node *root, int data)
{ // 50,40  NULL,40
    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }
    else
    {

        if (data > root->data)
        {
            // right
            root->right = addNode(root->right, data);
        }
        else if (data < root->data)
        {
            // left
            root->left = addNode(root->left, data);
        }
    }
    return root;
}

void inOrder(struct node *root)
{

    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %d", root->data);
        inOrder(root->right);
    }
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf(" %d", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf(" %d", root->data);
    }
}

int main()
{

    struct node *root = NULL;

    root = addNode(root, 50);
    addNode(root, 40);
    addNode(root, 90);
    addNode(root, 120);
    addNode(root, 80);
    addNode(root, 30);
    addNode(root, 45);

    // printf("\n%d", root->data);
    // printf("\n%d", root->left->data);
    // printf("\n%d", root->right->data);
    // printf("\n%d", root->right->right->data);

    printf("\nInOrder");
    inOrder(root);

    printf("\nPreOrder");
    preOrder(root);

    printf("\nPostOrder");
    postOrder(root);
}