#include <stdio.h>

int main()
{
  int i, nota[5], soma;

  for (i = 0; i < 5; i++)
  {
    printf("Digite a nota %d: ", i + 1);
    scanf("%d", &nota[i]);
  }
  soma = 0;
  for (i = 0; i < 5; i++)
  {
    soma += nota[i];
  }
  printf("Soma: %d\n", soma);
}