#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next; // long int
} *head = NULL, *last = NULL;

void addNode(int num)
{
    struct node *tmp = NULL;

    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = 10;
        head->next = NULL;
        last = head;
    }
    else
    {

        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}
int main()
{

    // 10
    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    
    printf(" %d %d %d",head->data,head->next->data,head->next->next->data);
    return 0;
}