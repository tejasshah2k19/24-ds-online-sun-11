#include <stdio.h>
#define MASTER 8

int master[] = {12, 34, 56, 78, 97, 97, 43, 200};

int playerA[MASTER];
int playerB[MASTER];

void distribute()
{
    // playerA[] = {12,56,97,43}

    // playerB[] = {34,78,97,200}

    int i;
    int x = 0;
    int y = 0;
    for (i = 0; i < MASTER; i++)
    {

        playerA[x] = master[i];
        x++;
        i++;
        playerB[y] = master[i];
        y++;
    }
}

void printCards()
{
    // playerA

    // playerB
    //  playerA[] = {12,56,97,43}
    int i;
    printf("\nPlayerA : ");
    for (i = 0; i < MASTER; i++)
    {
        if(playerA[i] == 0 )
            break;
        printf(" %d", playerA[i]);
    }
    // playerB[] = {34,78,97,200}
    printf("\nPlayerB : ");
    for (i = 0; i < MASTER; i++)
    {
        
        if(playerB[i] == 0 )
            break;
        printf(" %d", playerB[i]);
    }
}

void shiftByOne(){
    int i;

    for(i=0;i<MASTER;i++){
        playerA[i] = playerA[i+1];
    }
    
    for(i=0;i<MASTER;i++){
        playerB[i] = playerB[i+1];
    }
}
void battle(int count){
    int battle[MASTER] ; 
    //playerA -> 0th index card remove -> store into battle array 
    //shift array by minus-1 index 
    battle[0] = playerA[0];//12 
    //playerB -> 0th index card remove -> store into battle array 
    battle[1] = playerB[0];//34

    shiftByOne(); //playerA playerB  
    printf("\nBattle : %d",count);
    printCards(); 
}

int main()
{
    distribute();
    printCards();
    battle(1);
    battle(2);
    return 0;
}