#include<stdio.h>
#define SIZE 10 

int a[] = {10,20,30,40,50,60,70,80,90,100};


void binarySearch(int search){
    int min,max,mid; 
    int found = 0; //not found 
    min = 0; 
    max = SIZE - 1; 

    
    while(min<=max){ 
       mid = (min+max)/2; 
        if(search == a[mid]){
            found = 1; 
            break; 
        }else if(search > a[mid]){
            min = mid + 1; 
        }else {
            max = mid - 1;
        }
    }

    if(found == 1){
        printf("\n%d FOUND",search);
    }else{
        printf("\n%d Not Found",search);
    }



}



int main(){

    binarySearch(20);//found 
    binarySearch(90);//found
    binarySearch(300);//not found  
    binarySearch(-10); //NOtfound 
    return 0; 
}