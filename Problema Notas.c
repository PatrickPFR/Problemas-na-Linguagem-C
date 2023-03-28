/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   double nota1, nota2, notaFinal;
   
   printf("Digite a primeira nota: ");
   scanf("%lf", &nota1);
   printf("Digite a segunda nota: ");
   scanf("%lf", &nota2);
   
   notaFinal = nota1 + nota2;
   
   printf("NOTA FINAL = %.1lf\n", notaFinal);
   
   if(notaFinal < 60.0){
       printf("REPROVADO\n");
   }
   

    return 0;
}
