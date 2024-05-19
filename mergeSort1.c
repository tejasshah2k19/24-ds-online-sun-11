#include <stdio.h>
#define S1 5
#define S2 7
#define S3 S1 + S2

int main()
{

    int a[] = {10, 20, 30, 40, 50};
    int b[] = {5, 15, 19, 35, 70, 80, 90};
    int c[S3];
    int i, j, k;

    i = 0;
    j = 0;
    k = 0;

    while (i < S1 && j < S2)
    {

        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }

    while (i < S1)
    {
        c[k] = a[i];
        k++;
        i++;
    }

    while (j < S2)
    {
        c[k] = b[j];
        k++;
        j++;
    }


    printf("\nElements in C\n");
    for(i=0;i<S3;i++){
        printf(" %d",c[i]);
    }
}