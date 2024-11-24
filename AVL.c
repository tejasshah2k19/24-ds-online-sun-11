#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;
};

int calculateHeight(struct node *root)
{
    int lh = 0;
    int rh = 0;

    if (root->left != NULL)
    {
        lh = root->left->height; // 1
    }
    if (root->right != NULL)
    {
        rh = root->right->height; // 1
    }

    return lh > rh ? lh : rh; // 1
}

int calculateBF(struct node *root)
{
    int lh = 0;
    int rh = 0;

    if (root->left != NULL)
    {
        lh = root->left->height; // 1
    }
    if (root->right != NULL)
    {
        rh = root->right->height; // 1
    }

    return lh - rh;
}

struct node *leftRotate(struct node *root)
{
    struct node *rr = root->right;
    root->right = rr->left;
    rr->left = root;
    return rr;
}

struct node *rightRotate(struct node *root)
{ // 70
    struct node *rl = root->left;
    root->left = rl->right;
    rl->right = root;
    return rl;
}

struct node *addNode(struct node *root, int data)
{ // 50,40  NULL,40
    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = data; // 70
        root->left = NULL;
        root->right = NULL;
        root->height = 1;
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
        // end bst

        root->height = calculateHeight(root) + 1;
        int bf = calculateBF(root);

        if (bf < -1 || bf > 1)
        {
            printf("\nImbalance => %d", root->data);
            if (bf < -1)
            {
                if (data > root->right->data)
                {

                    printf(" RR ");
                    // left rotate
                    root = leftRotate(root); // rr
                }
                else
                {
                    printf(" RL ");
                }
            }
            else if (bf > 1)
            {
                if (data > root->left->data)
                {
                    printf(" LR ");
                }
                else
                {
                    printf(" LL ");
                    root = rightRotate(root);
                }
            }
        }
    }
    return root;
}

void inOrder(struct node *root)
{

    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %d(%d)", root->data, root->height);
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
    // RR
    //  root = addNode(root, 50);
    //  root = addNode(root, 60);
    //  root = addNode(root, 70);

    // RR
    //  root = addNode(root, 50);
    //  root = addNode(root, 60);
    //  root = addNode(root, 40);
    //  root = addNode(root, 70);
    //  root = addNode(root, 55);
    //  root = addNode(root, 80);

    // LL
    //  root = addNode(root, 70);
    //  root = addNode(root, 60);
    //  root = addNode(root, 50);

    root = addNode(root, 70);
    root = addNode(root, 60);
    root = addNode(root, 100);
    root = addNode(root, 50);
    root = addNode(root, 67);
    root = addNode(root, 40);

    // RL
    //  root = addNode(root, 50);
    //  root = addNode(root, 70);
    //  root = addNode(root, 60);

    // LR
    //  root = addNode(root, 70);
    //  root = addNode(root, 50);
    //  root = addNode(root, 60);

    printf("\nInOrder");
    inOrder(root);
    printf("\nroot=> %d", root->data); // 60
}