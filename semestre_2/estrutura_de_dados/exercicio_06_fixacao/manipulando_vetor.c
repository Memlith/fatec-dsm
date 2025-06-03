#include <stdio.h>

int main()
{
  int i, soma, vetor[6] = {1, 0, 5, -2, -5, 7};

  soma = vetor[0] + vetor[1] + vetor[5];
  printf("soma: %d\n", soma);
  vetor[4] = 100;
  for (i = 0; i < 6; i++)
    printf("%d\n", vetor[i]);
}