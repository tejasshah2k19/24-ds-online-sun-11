#include <stdio.h>
#include <stdlib.h>
#define S 5

int q[S];
int front = -1;
int rear = -1;

void enqueue(int num)
{
    if (rear == S - 1 && front == 0)
    {
        printf("\nQueue is Full");
    }
    else if (rear == front - 1)
    {
        printf("\nQueue is Full");
    }
    else
    {
        if (rear == S - 1)
        {
            rear = 0;
            q[rear] = num;
        }
        else
        {
            rear++;
            q[rear] = num;
            if (front == -1)
                front = 0;
        }
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("\nQueue is Empty");
    }
    else if (front == rear)
    {
        printf("\n%d removed", q[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        if (front == S - 1)
        {
            printf("\n%d removed", q[front]);
            front=0;
        }
        else
        {
            printf("\n%d removed", q[front]);
            front++;
        }
    }
}

void display()
{
    int i;
    if (front == -1)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        printf("\nElements in the QUEUE : ");

        if (front <= rear)
        {
            for (i = front; i <= rear; i++)
            {
                printf(" %d", q[i]);
            }
        }
        else
        {
            for (i = front; i <= S - 1; i++)
            {
                printf(" %d", q[i]);
            }
            for (i = 0; i <= rear; i++)
            {
                printf(" %d", q[i]);
            }
        }
    }
}

int main()
{
    int choice;
    int data;

    while (1)
    {
        printf("\n\n0 For Exit\n1 For Insert\n2 For Remove\n3 For Display\nEnter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            printf("\nEnter data");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
            printf("\nInvalice Choice PTA!!!");
            ;
        }
    }
    return 0;
}
