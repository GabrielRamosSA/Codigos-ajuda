#include <stdio.h>


#define M 3 
#define N 2 
#define P 4 

int main()
{
    
    int A[M][N] = {{1, 2}, {3, 4}, {5, 6}}; 
    int B[N][P] = {{7, 8, 9, 10}, {11, 12, 13, 14}};
    int C[M][P] = {0};
    
    for (int i = 0; i < M; i++)
    { 
        for (int j = 0; j < P; j++)
        { 
            for (int k = 0; k < N; k++)
            { 
                C[i][j] +=  A[i][k] * B[k][j];
            }
        }
    }
    
    printf("Matriz Resultante C:\n");
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < P; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
