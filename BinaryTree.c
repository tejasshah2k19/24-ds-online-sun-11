#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *addNode(struct node *root, int num)
{
    struct node *tmp;
    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = num;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->left = NULL;
        tmp->right = NULL;
        root->left = tmp;
    }
}
int main()
{

    struct node *root = NULL;

    root = addNode(root, 10);
    addNode(root, 20);

    printf("\n%d  %d", root->data, root->left->data);
    return 0;
}