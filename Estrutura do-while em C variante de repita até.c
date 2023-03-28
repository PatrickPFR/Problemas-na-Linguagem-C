/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Estrutura do-while em C variante de "repita até"

#include <stdio.h>
void limpar_entrada ( ){
    char c;
    while ((c= getchar()) !='\n' && c != EOF){}
}

int main()
{
 double C, F; 
 char resp;
 
 do {
     printf("Digite a temperatura em Celsius:");
     scanf("%lf", &C);
     F= 9.0 * C/ 5.0 + 32.0;
     printf("Equivalente em Fahrenheit: %.1lf\n", F);
     printf("Deseja repetir (s/n)?");
     limpar_entrada();
     scanf("%c", &resp);
     
 } while (resp == 's');

    return 0;
}
