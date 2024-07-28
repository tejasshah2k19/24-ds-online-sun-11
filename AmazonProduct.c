#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    int choice, i, id, j;
    int rating;
    char cat[30];
    struct product tmp;
    // struct product p[SIZE]; // p[0] p[1]
    struct product p[] = {
        {1, "iphone 15", "phone", 20, 150000, 10, 5},
        {2, "legion y 520", "laptop", 50, 55000, 15, 4},
        {3, "vivo v1", "phone", 100, 20000, 7, 3},

    };
    int totalProducts = 3;
    while (1)
    {
        printf("\n0 For Exit\n1 For Add\n2 For List Products\n3 For Search Product By Category\n4 For Search Product By Id");
        printf("\n5 For search By Rating");
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

            printf("\nProductId  Name         Category        Price     Qty    DiscountPerc  Rating");
            for (i = 0; i < totalProducts; i++)
            {
                printf("\n %-9d %-13s %-13s  %-6d    %-5d     %-13d %-5d", p[i].productId, p[i].name, p[i].category, p[i].price, p[i].qty, p[i].discountPercentage, p[i].rating);
            }
            break;
            // print all
            // format
        case 3:
            printf("\nEnter Category?");
            scanf("%s", &cat);
            // linear search
            printf("\nProductId  Name         Category        Price     Qty    DiscountPerc  Rating");
            for (i = 0; i < totalProducts; i++)
            {
                // strcmp
                // phone Phone =>   same { case ignore }

                if (stricmp(p[i].category, cat) == 0)
                {
                    printf("\n %-9d %-13s %-13s  %-6d    %-5d     %-13d %-5d", p[i].productId, p[i].name, p[i].category, p[i].price, p[i].qty, p[i].discountPercentage, p[i].rating);
                }
            }
            break;
        case 4:
            // linear search
            printf("\nEnter ProductID ? ");
            scanf("%d", &id);
            printf("\nProductId  Name         Category        Price     Qty    DiscountPerc  Rating");
            for (i = 0; i < totalProducts; i++)
            {
                if (p[i].productId == id)
                {
                    printf("\n %-9d %-13s %-13s  %-6d    %-5d     %-13d %-5d", p[i].productId, p[i].name, p[i].category, p[i].price, p[i].qty, p[i].discountPercentage, p[i].rating);
                }
            }

        case 5:
            // sort products by rating
            for (i = 0; i < totalProducts; i++)
            {
                for (j = 0; j < totalProducts - 1; j++)
                {
                    if (p[j].rating > p[j + 1].rating)
                    {
                        tmp = p[j];
                        p[j] = p[j + 1];
                        p[j + 1] = tmp;
                    }
                }
            }

            // binary search
            printf("\nEnter Rating? ");
            scanf("%d", &rating);

            // logic
            break;
        default:
            break;
        }
    }

    return 0;
}