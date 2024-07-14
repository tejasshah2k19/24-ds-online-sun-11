#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[21];
    int rollNum;
    char city[20];
    int rank;
}; // 21+20+4+4=>49+

int main()
{
    struct student x;  // dot operator
    struct student *s; // malloc arrow

    // s = (struct student*)malloc(sizeof(struct student));
    s = malloc(sizeof(struct student));
    printf("\nEnter name rollnum city and rank");
    scanf("%s%d%s%d", &s->name, &s->rollNum, &s->city, &s->rank);

    printf("Name = %s\nRollNum = %d\nCity = %s\nRank = %d", s->name, s->rollNum, s->city, s->rank);

    free(s);
    return 0;
}