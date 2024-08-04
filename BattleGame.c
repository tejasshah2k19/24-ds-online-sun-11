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
        // if(playerA[i] == 0 )
        // break;
        printf(" %d", playerA[i]);
    }
    // playerB[] = {34,78,97,200}
    printf("\nPlayerB : ");
    for (i = 0; i < MASTER; i++)
    {

        //  if(playerB[i] == 0 )
        //   break;
        printf(" %d", playerB[i]);
    }
}

int isEmpty()
{
    // 0 return if no 1 is empty
    // 1 return playerA is empty
    // 2 return playerB is empty
    // 3 return both are empty

    if (playerA[0] == 0 && playerB[0] == 0)
    {
        return 3; // both are empty
    }
    else if (playerA[0] == 0)
    {
        return 1; // playerA is empty
    }
    else if (playerB[0] == 0)
    {
        return 2; // playerB is empty
    }
    else
    {
        return 0; // no 1 is empty
    }
}

void shiftByOne()
{
    int i;

    for (i = 0; i < MASTER - 1; i++)
    {
        playerA[i] = playerA[i + 1];
    }
    playerA[i] = 0;

    for (i = 0; i < MASTER - 1; i++)
    {
        playerB[i] = playerB[i + 1];
    }
    playerB[i] = 0;
}
void battle(int count)
{
    int battle[MASTER];
    // playerA -> 0th index card remove -> store into battle array
    // shift array by minus-1 index
    battle[0] = playerA[0]; // 12
    // playerB -> 0th index card remove -> store into battle array
    battle[1] = playerB[0]; // 34

    shiftByOne(); // playerA playerB
    printf("\nBattle : %d", count);
    printCards();

    // winner
}

int main()
{
    int status;
    distribute();
    printCards();
    int i;

    for (i = 1; i <= 150; i++)
    {
        battle(i);
        status = isEmpty();
        if (status == 0)
        {
            continue;
        }
        else if (status == 3)
        {
            printf("\nBoth Are Looser");
            break;
        }
        else if (status == 1)
        {
            printf("\nPlayerB is the Game Winner");
            break;
        }
        else if (status == 2)
        {
            printf("\nPlayerA is the Game Winner");
            break;
        }
    }
    return 0;
}