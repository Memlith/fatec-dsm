#include <stdio.h>

int main()
{
  int n_1, n_2, soma;
  printf("Digite o primeiro numero: ");
  scanf("%i", &n_1);
  printf("Digite o segundo numero: ");
  scanf("%i", &n_2);
  soma = n_1 + n_2;
  printf("A soma de %i e %i = %i", n_1, n_2, soma);
  return 0;
}
