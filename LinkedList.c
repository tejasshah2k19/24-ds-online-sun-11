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
        printf(" %d",i->data);
    }
}

void search(int key){

    struct node *i; 
    int found = 0;//not present - false 
    for(i=head;i!=NULL;i=i->next){
        if(i->data ==key){
            found = 1; //present - true 
            break;
        }
    }

    if(found==1){
        printf("\n%d Found",key);
    }else{
        printf("\n%d Not Found",key);
    }
}

void sum(){
    //sum of all elements in the linked list 
}

void max(){
    //find out the max element from the linked list 
}
int main()
{

    // 10
    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);

    display();
 
    search(25);//not found 
    search(30);//found 
    return 0;
}