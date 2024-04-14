#include<stdio.h>
#define SIZE 10

int a[SIZE]; 

void getData(){
    int i;
    for(i=0;i<SIZE;i++){
        printf("\nEnter number");
        scanf("%d",&a[i]);
    }
}

void display(){
int i;
    printf("\nElements in the Array\n");
    for(i=0;i<SIZE;i++){
        printf(" %d",a[i]);
    }
}

void selectionSort(){
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
    }
}


int main(){

    getData();//scan array 
    display(); //print array -- unsorted 
    selectionSort(); //array is sorted 
    display(); //print array -- sorted 
    return 0; 
}