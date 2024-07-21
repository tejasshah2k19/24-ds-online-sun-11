#include <stdio.h>
#include <stdlib.h>

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
    int choice, i;
    struct product p[SIZE]; // p[0] p[1]
    int totalProducts;
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
            printf("\nHow many Products You want to Enter ");
            scanf("%d", &totalProducts); // 2 {10+}

            if (totalProducts > 10)
            {
                printf("\nYou are Allowed to add 10 Products MAX");
            }
            else
            {
                for (i = 0; i < totalProducts; i++)
                {
                    printf("\nEnter ProductId");
                    scanf("%d", &p[i].productId);
                    printf("\nEnter Name and Category");
                    scanf("%s%s", &p[i].name, &p[i].category);
                    printf("\nEnter price and qty");
                    scanf("%d%d", &p[i].price, &p[i].qty);
                    printf("\nEnter discountPercentage and Rating");
                    scanf("%d%d", &p[i].discountPercentage, &p[i].rating);
                }
            }
            break;
        case 2:

            printf("\nProductId  Name  Category  Price Qty  DiscountPerc  Rating");
            for (i = 0; i < totalProducts; i++)
            {
                printf("\n %d %s %s %d %d %d %d", p[i].productId,p[i].name, p[i].category,p[i].price, p[i].qty,p[i].discountPercentage, p[i].rating);
            }
            // print all
            //format 
            

        default:
            break;
        }
    }

    return 0;
}