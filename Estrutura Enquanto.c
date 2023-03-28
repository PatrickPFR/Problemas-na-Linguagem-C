/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x, y;
    printf("Digite dois numeros:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    
    while (x != y) {
        if (x > y) {
            printf("DECRESCENTE\n");
        }
    else {
           printf("CRESCENTE\n");
        
    }
    printf("Digite outros dois numeros:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    }
}

