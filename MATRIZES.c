/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int M, N, i, j;
    
    printf("Quantas linhas vai ter a matriz? ");
    scanf("%d", &M);
    printf("Quantas colinas vai ter a matriz? ");
    scanf("%d", &N);
    
    int mat [M][N];
    
    for(i = 0; i < M; i++) {
         for(j = 0; j < N; j++) {
             printf("Elemento [%d,%d]: ", i, j);
             scanf("%d", &mat [i][j]);
         }
    }
    printf("\nMatriz digitada:\n");
    for(i = 0; i < M; i++) {
        for(j = 0; j < N; j++) {
        printf("%d ", mat[i][j]);
    }
    printf("\n");
    }
    return 0;

}