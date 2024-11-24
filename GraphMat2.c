#include <stdio.h>

int graph[100][100];

int main()
{

    int i, j;
    int totalVertex;
    int totalEdges; 
    int source,dest;

    printf("\nHow many Vertext you have?");
    scanf("%d", &totalVertex);

    printf("\nHow many Edges you have?");
    scanf("%d", &totalEdges);//4 


    for (i = 1; i <=totalEdges; i++)
    {
        printf("\nEnter source and Destination : ");
        scanf("%d%d",&source,&dest); //0 1 
        graph[source][dest] = 1; 
        graph[dest][source] = 1; 
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
