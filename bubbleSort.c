#include <stdio.h>
#define SIZE 5

int arr[SIZE];

// scan all the elements for an array
void getData()
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("\nEnter value");
        scanf("%d", &arr[i]);
    }
}

// print all the elements of the array
void printData()
{
    int i;
    printf("\nElements In The Array\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("  %d", arr[i]);
    }
}

// sort an array using bubble sort
void bubbleSort()
{
    int i, j, tmp;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main()
{

    getData();   // 25 06  50
    printf("\nArray Before Sorting:-");
    printData(); // unsorted
    bubbleSort();
    printf("\nArray After Sorting:-");
    printData(); // sorted print
    return 0;
}