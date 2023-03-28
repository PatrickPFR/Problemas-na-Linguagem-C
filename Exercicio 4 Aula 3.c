/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    float num1, num2;
    float soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;

    printf("\nA soma entre %.2f e %.2f é: %.2f", num1, num2, soma);
    printf("\nA subtração entre %.2f e %.2f é: %.2f", num1, num2, subtracao);
    printf("\nA multiplicação entre %.2f e %.2f é: %.2f", num1, num2, multiplicacao);
    printf("\nA divisão entre %.2f e %.2f é: %.2f", num1, num2, divisao);

    return 0;
}
