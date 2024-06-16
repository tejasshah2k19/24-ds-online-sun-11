#include<stdio.h>
#define S 5

int q[S];
int f=-1;
int r=-1;

void insert(int data){
    if( r == S-1 && f == 0){
        printf("\nQueue IS Full");
    }else if(r == f-1){
        printf("\nQueue IS Full");      
    }else{
        if(r == S-1 ){
            r=0;
            q[r]=data;//60 
        }else{
            r++;
            q[r]=data;
            if(f==-1) 
                f=0;
        }
    }
}


void remove(){

}


void display(){
    int i;
    if(f==-1){
        printf("\nQueue IS EMPTY");
    }else  if(r<f){
        for(i=f;i<S;i++){
            printf(" %d",q[i]);
        }
        
        for(i=0;i<=r;i++){
            printf(" %d",q[i]);
        }
         
    }else{
        //sq 
        
        for(i=f;i<=r;i++){
            printf(" %d",q[i]);
        }
    }
}

int main()
{
    int choice;
    int data;

    while (1)
    {
        printf("\n\n0 For Exit\n1 For Insert\n2 For Remove\n3 For Display\nEnter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            printf("\nEnter data");
            scanf("%d", &data);
            insert(data);
            break;
        case 2:
            remove();
            break;
        case 3:
            display();
            break;
        default:
            printf("\nInvalice Choice PTA!!!");
            ;
        }
    }
    return 0;
}
