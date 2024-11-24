#include <stdio.h>
#include <stdlib.h>

struct edges
{
    int source;
    int dest;
};

// source dest

int main()
{

    int i, j;
    int totalVertex;
    int totalEdges;
    int source, dest;

    struct edges *e;

    printf("\nHow many Vertext you have?");
    scanf("%d", &totalVertex);

    printf("\nHow many Edges you have?");
    scanf("%d", &totalEdges); // 4

    e = calloc(totalEdges * 2, sizeof(struct edges));

    for (i = 0; i < totalEdges * 2; i++)
    {
        printf("\nEnter source and Destination : ");
        scanf("%d%d", &source, &dest); // 0 1
        e[i].source = source;
        e[i].dest = dest;
        i++;
        e[i].source = dest;
        e[i].dest = source;
    }

    printf("\nEnter source Vertex?");
    scanf("%d", &source); // 3

    for (i = 0; i < totalEdges * 2; i++)
    {
        if (e[i].source == source)
        {
            printf(" %d", e[i].dest);
        }
    }
    return 0;
}
