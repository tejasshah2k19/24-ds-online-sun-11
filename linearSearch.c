#include<stdio.h>
#define SIZE 10 


int a[]= {23,45,67,89,87,6,5,43,450,607}; 

void linearSearch(int search){

    int i; 
    int found = 0; //0 -> not found 
    for(i=0;i<SIZE;i++){
        if(a[i] == search){
            found  = 1;       
            break;
        } 
    }

    if(found == 0){
        printf("\n%d Not Found",search);
    }else{
        printf("\n%d Found",search);      
    }
}

int main()
{

    linearSearch(870);

    return 0;
}

//O(n)

//binary search 