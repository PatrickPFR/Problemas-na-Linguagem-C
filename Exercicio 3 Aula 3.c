/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
  float custoFabrica, custoConsumidor, valorImpostos, lucroDistribuidor;

  printf("Digite o custo de fábrica do carro: R$ ");
  scanf("%f", &custoFabrica);

  lucroDistribuidor = 0.12 * custoFabrica;
  valorImpostos = 0.45 * custoFabrica;
  custoConsumidor = custoFabrica + lucroDistribuidor + valorImpostos;

  printf("\nCusto final ao consumidor: R$ %.2f", custoConsumidor);
  printf("\nValor destinado ao pagamento dos impostos: R$ %.2f", valorImpostos);
  printf("\nLucro do distribuidor: R$ %.2f", lucroDistribuidor);

  return 0;
}
