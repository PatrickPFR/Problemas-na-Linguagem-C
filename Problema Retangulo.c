/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
   double base, altura, area, perimetro, diagonal;
   printf("Base do retangulo: ");
   scanf("%lf", &base);
   
   printf("Altura do retangulo: ");
   scanf("%lf", &altura);
   
   area = base * altura;
   perimetro = 2 * (base + altura);
   diagonal = sqrt (pow(base, 2.0)+ pow(altura, 2.0));
   
   printf("Area = %.4lf\n", area);
   printf("Perimetro = %.4lf\n", perimetro);
   printf("Diagonal = %.4lf\n", diagonal);
}
