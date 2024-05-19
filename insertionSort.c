#include <stdio.h>
#define SIZE 5

void getData(int a[])
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("\nEnter number");
        scanf("%d", &a[i]);
    }
}
void display(int a[])
{
    int i;
    printf("\nElements in the Array\n");
    for (i = 0; i < SIZE; i++)
    {
        printf(" %d", a[i]);
    }
}

void insertionSort(int a[]){
    int i,j,tmp; 

    for(i=1;i<SIZE;i++){
        tmp = a[i];
        for(j=i-1;j>=0;j--){
            if(a[j] > tmp){
                a[j+1] = a[j];
            }else{
                break;
            }
        }
        a[j+1]=tmp;
    }
}
int main()
{
    int a[SIZE];
    getData(a);       // scan array
    display(a);       // print array -- unsorted
    insertionSort(a); // array is sorted
    display(a);       // print array -- sorted
    return 0;
}