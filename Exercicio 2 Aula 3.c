/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int A, B, temp;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("\nValores iniciais:\nA = %d\nB = %d\n\n", A, B);

    // Troca dos valores
    temp = A;
    A = B;
    B = temp;

    printf("Valores após a troca:\nA = %d\nB = %d\n", A, B);

    return 0;
}






