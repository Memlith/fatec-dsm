#include <stdio.h>

int somar(int *numA, int *numB)
{
  int soma;
  soma = *numA + *numB;
  return soma;
}

int main()
{
  int numA, numB;
  printf("Digite o numero A: ");
  scanf("%d", &numA);
  printf("Digite o numero B: ");
  scanf("%d", &numB);
  somar(numA, numB);
  printf("\nResultado A + B: %d\n", somar(numA, numB));
  return 0;
}