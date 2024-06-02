#include<stdio.h>
#define S 10 

void mergeSort(int c[],int start,int mid,int end){//start:0  mid:4  end:9
     int s1 = mid-start+1;//start+mid+1:5 
     int s2 = end-mid;//9-4:5
     int a[s1];//c first array a 
     int b[s2];//c second array b 


    int k = start ; 
    int i=0;
    int j=0;
    while(k<=mid){     
        a[i++] = c[k++];
    }
    k=mid+1;
    while(k<=end){
        b[j++]=c[k++];
    }

    printf("\n=================A array=================\n");
    i=0;
    for(i=0;i<s1;i++){
        printf(" %d",a[i]);
    }    
  printf("\n============B Array======================\n");
    for(j=0;j<s2;j++){
        printf(" %d",b[j]);
    }    
  
    
    // i=0;
    // j=0;
    // k=start;
    // while(i<s1 && j<s2){
    //     if(a[i] < b[j]){
    //         c[k++] = a[i++];
    //     }else{
    //         c[k++] = b[j++];
    //     }
    // }

    // while(i<s1){
    //     c[k++] = a[i++];
    // }


    // while(j<s2){
    //     c[k++] = b[j++];
    // }

}

void divide(int a[],int l,int r){//a 0 7 {a 0 3 {a 0 1 } {a 0 0} }
                                    //   {a 4 7 {a 4 6}}
    if(l<r){ //0 3 
        int mid = (l+r)/2;//1
        divide(a,l,mid);//0 1  
        divide(a,mid+1,r); //4 7 
    }

}

int main(){
 
    int c[]={1,2,3,4,5,10,15,20,25,30};

    int start = 0;
    int end  = S-1; 
    int mid = (start+end)/2; //4

    mergeSort(c,start,mid,end);//5 8   
    return 0; 
}