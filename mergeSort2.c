#include<stdio.h>
#define S 8 



void divide(int a[],int l,int r){//a 0 7 {a 0 3 {a 0 1 } {a 0 0} }
                                    //   {a 4 7 {a 4 6}}
    if(l<r){ //0 3 
        int mid = (l+r)/2;//1
        divide(a,l,mid);//0 1  
        divide(a,mid+1,r); //4 7 
    }

}

int main(){

    int a[] = {10,	15,	5,	17,	32,	11,	85,	6};

    divide(a,0,S-1);//0 7 
    return 0; 
}