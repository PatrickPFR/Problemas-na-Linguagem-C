/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int a, b, c, menor;
  printf("Primeiro valor: ");
  scanf("%d", &a);
  printf("Segundo valor: ");
  scanf("%d", &b);
  printf("Terceiro valor: ");
  scanf("%d", &c);
  
  if (a < b && a < c) {
      menor = a; 
  }
  else if (b < c) {
  menor = b;
   }
      else {
          menor = c;
      }
      printf("MENOR = %d\n", menor);
    return 0;
}
