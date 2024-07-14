#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x;    // 4 byte
    int *y;   // pointer variable
    int *arr; // 5 elements
    int i;

    y = malloc(sizeof(int));
    arr = calloc(5, sizeof(int)); // int*5 => 4*5=> 20 byte

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter values");
        scanf("%d", &arr[i]);
    }

    printf("\nElements in the Array\n");
    for (i = 0; i < 5; i++)
    {
        printf(" %d",  arr[i]);
    }

    free(arr);
    free(y);

    //sum of all elements 
    //max from array 
    
}