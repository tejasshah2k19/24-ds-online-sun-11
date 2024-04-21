#include<stdio.h>
#define SIZE 5



void getData(int a[]){
    int i;
    for(i=0;i<SIZE;i++){
        printf("\nEnter number");
        scanf("%d",&a[i]);
    }
}

void display(int a[]){
int i;
    printf("\nElements in the Array\n");
    for(i=0;i<SIZE;i++){
        printf(" %d",a[i]);
    }
}

void selectionSort(int a[]){
    int i,j,min,tmp; 

    for(i=0;i<SIZE;i++){
        min =i; 
        for(j=i+1;j<SIZE;j++){
            if(a[min] > a[j]){
                min = j ; 
            }
        }
        tmp = a[i];
        a[i] = a[min];
        a[min] = tmp;
        printf("\n PASS %d",i+1); 
        display(a);

    }
}


int main(){

    int a[SIZE]; 
    
    getData(a);//scan array 
    display(a); //print array -- unsorted 
    selectionSort(a); //array is sorted 
    display(a); //print array -- sorted 
    return 0; 
}