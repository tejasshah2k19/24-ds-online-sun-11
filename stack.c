#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int stack[SIZE];

int top = -1; // empty

void push(int num)
{
    if (top == SIZE - 1)
    {
        printf("\nStack OVERFLOW");
    }
    else
    {
        top++;
        stack[top] = num;
    }
}

void display()
{
    int i;
    if (top == -1)
    {
        printf("\nSTack UnderFlow");
    }
    else
    {
        printf("\nElement(s) in the STACK\n");
        for (i = top; i >= 0; i--)
        {
            printf("\n%d", stack[i]);
        }
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nStack UnderFlow");
    }
    else
    {
        printf("\n%d removed", stack[top]);
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        printf("\nStack UnderFlow");
    }
    else
    {
        printf("\n%d", stack[top]);
    }
}

// peep -> hw 

int main()
{

    int choice;
    int num;

    while (-1)
    { // 0:false anynumber:true
        printf("\n0 For EXIT\n1 For PUSH\n2 For Display\nEnter your hoice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter number ");
            scanf("%d", &num);
            push(num);
            break;
        case 2:
            display();
            break;

        default:
            printf("\nInvalid choice");
            break;
        case 0:
            exit(0);
        }
    }

    return 0;
}
