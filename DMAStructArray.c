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

    int totalStudents;
    struct student *s; // array
    int i;

    printf("\nHow many students you want to add!! ");
    scanf("%d", &totalStudents);

    s = calloc(totalStudents, sizeof(struct student));
    //= calloc(5,55);

    for (i = 0; i < totalStudents; i++)
    {
        printf("\nEnter name rollnum city and rank");
        scanf("%s%d%s%d", &s[i].name, &s[i].rollNum, &s[i].city, &s[i].rank);
    }
    printf("\nStudents Details:\n");
    for (i = 0; i < totalStudents; i++)
    {
        printf("Name = %s\nRollNum = %d\nCity = %s\nRank = %d", s[i].name, s[i].rollNum, s[i].city, s[i].rank);
    }

    // rank wise students
    // input: rock : 2 , john : 1 , sam : 4 , dual : 3

    // output : John : 1 , rock : 2 , dual : 3, sam : 4

    // some code goes here -> that sorts the students in asc of rank
    printf("\nStudents Details:\n");
    for (i = 0; i < totalStudents; i++)
    {
        printf("Name = %s\nRollNum = %d\nCity = %s\nRank = %d", s[i].name, s[i].rollNum, s[i].city, s[i].rank);
    }

    free(s);
    return 0;
}