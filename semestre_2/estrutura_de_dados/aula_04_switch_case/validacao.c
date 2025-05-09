#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
  setlocale(LC_ALL, "Portuguese");
  float num1;
  do
  {
    printf("\nInforme um número entre [0..10]: ");
    scanf("%f", &num1);
    if ((num1 < 0) || (num1 > 10))
    {
      getchar();
      system("clear");
      printf("\nNúmero inválido!\n");
    }
    else
    {
      printf("\nNúmero válido!\n");
    }
  } while ((num1 < 0) || (num1 > 10));
}