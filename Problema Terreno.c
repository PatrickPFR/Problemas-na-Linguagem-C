/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main() 
{
    double largura, comprimento, valor, area, preco;
    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);
    
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);
    
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valor);
    
    area = largura * comprimento;
    preco= area * valor;
    
    printf("Area do terreno = %.2lf\n", area);
    printf("Preco do terreno = %.2lf\n", preco);
    
    

    return 0;
}
