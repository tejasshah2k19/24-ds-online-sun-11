#include <stdio.h>

int graph[100][100];

int main()
{

    int i, j;
    int totalVertex;
    int source;

    printf("\nHow many Vertext you have?");
    scanf("%d", &totalVertex);

    for (i = 0; i < totalVertex; i++)
    {
        for (j = 0; j < totalVertex; j++)
        {
            printf("\nEnter value %d : %d => ", i, j);
            scanf("%d", &graph[i][j]);
        }
    }

    printf("\nEnter source Vertex?");
    scanf("%d", &source); // 3

    for (j = 0; j < totalVertex; j++)
    {
        if(graph[source][j] == 1 ){
            printf(" %d",j);
        }
    }
    return 0;
}
