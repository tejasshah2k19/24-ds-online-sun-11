#include <stdio.h>
#include<stdlib.h>

#define SIZE 10

struct product
{
    int productId;
    char name[30];
    char category[30];
    int qty;
    int price;
    int discountPercentage;
    int rating;
};

int main()
{
    int choice;

    while (1)
    {
        printf("\n0 For Exit\n1 For Add\n2 For List Products\n3 For Search Product By Category\n4 For Search Product By Id");
        printf("\nEnter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            // take input
            break;
        case 2:
            // print all

        default:
            break;
        }
    }

    return 0;
}