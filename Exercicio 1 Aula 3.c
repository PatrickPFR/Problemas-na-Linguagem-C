/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
  float tempo, velocidadeMedia, distancia, litros;

  printf("Digite o tempo gasto na viagem em horas: ");
  scanf("%f", &tempo);

  printf("Digite a velocidade média durante a viagem em km/h: ");
  scanf("%f", &velocidadeMedia);

  distancia = tempo * velocidadeMedia;
  litros = distancia / 12.0;

  printf("\nVelocidade média: %.2f km/h", velocidadeMedia);
  printf("\nTempo gasto: %.2f horas", tempo);
  printf("\nDistância percorrida: %.2f km", distancia);
  printf("\nQuantidade de litros utilizada: %.2f L", litros);

  return 0;
}
