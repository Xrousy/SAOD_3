#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nvertices_1 = 20;
    // int long1 = 100;

    int graph_1[nvertices_1][nvertices_1];
    for(int i = 0; i < nvertices_1; i ++)
    {
        for(int j = 0; j < nvertices_1; j++)
        {
            if(i == j)
            {
                graph_1[i][j] = 0;
            }
            else
            {
                graph_1[i][j] = 1;
            }
        }
    }
    {
        for(int i = 0; i < nvertices_1; i ++)
        {
            for(int j = 0; j < nvertices_1; j++)
            {   
                printf("%d ", graph_1[i][j]);
            }
            printf("\n"); 
        }  
    }
    
}