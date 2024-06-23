#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
char stack[SIZE];

int top = -1; // empty

void push(char num)
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
            printf("\n%c", stack[i]);
        }
    }
}

char pop()
{
    if (top == -1)
    {
        printf("\nStack UnderFlow");
    }
    else
    {
        return stack[top--]; 
    }
}

 

// peep -> hw 

int main()
{

    char str[SIZE];//50 
    int i;

    printf("\nEnter String");
    scanf("%s",&str);//0xAAA\0 

    for(i=0;str[i]!='\0';i++){
        push(str[i]);
    }

    display();
 
    return 0;
}
