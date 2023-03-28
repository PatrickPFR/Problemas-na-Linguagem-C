/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    char nome[50];
    float salario_fixo, vendas, salario_final;
    
    printf("Digite o nome do vendedor: ");
    scanf("%s", nome);
    
    printf("Digite o salário fixo do vendedor: ");
    scanf("%f", &salario_fixo);
    
    printf("Digite o total de vendas do vendedor no mês: ");
    scanf("%f", &vendas);
    
    salario_final = salario_fixo + (vendas * 0.15);
    
    printf("\nNome do vendedor: %s", nome);
    printf("\nSalário fixo: R$%.2f", salario_fixo);
    printf("\nSalário final no mês: R$%.2f", salario_final);
    
    return 0;
}
