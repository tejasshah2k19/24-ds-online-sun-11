#include <stdio.h>

void add()
{
    printf("add()");
}

void print()
{
    printf("Hi");
    add();
    printf("BYE");
}

void greet()
{
    printf("Welcome");
    greet();
}

void printRoyal(int count) // 0
{                          // 0
    if (count != 0)
    {
        printf("\nRoyal"); // Royal Royal Royal Royal
        printRoyal(count - 1);
    }
}

void printNum(int count) // 0
{                        // 0
    if (count != 0)
    {
        printf("\n%d", count); // Royal Royal Royal Royal
        printNum(count - 1);
    }
}

void printRange(int count)//6 5
{ // 6
    if (count != 0)
    {
        printRange(count - 1);
        printf("\n%d", count);
    }
}


void mulTable(int num,int count){
    if(count != 11){
        printf("\n%d * %d = %d",num,count,num*count); //10  * 1 = 10 
        mulTable(num,count+1); 
    }
}

int sum(int count){//5
    if(count!=0){
        return count + sum(count-1);
        //return 5 + sum(4)
            //return 4 + sum(3) 
                //return 3 + sum(2)
                    //return 2 + sum(1)
                        //
    }
    return 0;
}
int main()
{
    int ans;
    // printRoyal(4);

    // printNum(4);//4 3 2 1
   // printRange(6); // 1 2 3 4 5 6

    // print();
    //mulTable(10,1);
    //10 * 1 = 10 
    //10 * 2 = 20 
    //10 * 10 = 100 

    ans = sum(5);//15 sum(3) => 6 
    printf("\n ans = %d",ans); //1+2+3+4+5 => 15 
    fact(5); //5*4*3*2*1 
    return 0;
}