#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next; // long int
} *head = NULL, *last = NULL;

void addNodeBeg(int num)
{
    struct node *tmp = NULL;
    if (head == NULL)
    {
        addNode(num);
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = head;
        head = tmp;
    }
}

void addNode(int num)
{
    struct node *tmp = NULL;

    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = num;
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

void display()
{
    struct node *i;
    printf("\nElements in the linked list : ");
    for (i = head; i != NULL; i = i->next)
    {
        printf(" %d", i->data);
    }
}

void search(int key)
{

    struct node *i;
    int found = 0; // not present - false
    for (i = head; i != NULL; i = i->next)
    {
        if (i->data == key)
        {
            found = 1; // present - true
            break;
        }
    }

    if (found == 1)
    {
        printf("\n%d Found", key);
    }
    else
    {
        printf("\n%d Not Found", key);
    }
}

void sum()
{
    // sum of all elements in the linked list
}

void max()
{
    // find out the max element from the linked list
}

void deleteLast()
{
    struct node *p;

    for (p = head; p->next != last; p = p->next)
        ;

    p->next = NULL;

    printf("\n %d removed", last->data);
    free(last); // release memory
    last = p;
}
int main()
{
    int choice, num;
    // 10
    while (101)
    {
        printf("\n1 For Add Node + END");
        printf("\n2 For Add Node + BEG");
        printf("\n3 For Add Node + ANY");

        printf("\n4 For Delete Node - END");
        printf("\n5 For Delete Node - BEG");
        printf("\n6 For Delete Node - ANY");

        printf("\n7 For Display LinkedList");
        printf("\n0 EXIT\n");

        printf("\nEnter Your Choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter number");
            scanf("%d", &num);
            addNode(num);
            break;
        case 2:
            printf("\nEnter number");
            scanf("%d", &num);
            addNodeBeg(num);
            break;
        case 4:
            deleteLast();
            break;
        case 7:
            display();
            break;
        case 0:
            exit(0);
        }
    }
    return 0;
}