#include <stdio.h>

int main()
{
  int i, j, valor, matriz[2][2];

  for (i = 0; i < 2; i++)
    for (j = 0; j < 2; j++)
    {
      do
      {
        printf("Informe um valor para a posição [%d][%d] (0 a 10): ", i + 1, j + 1);
        scanf("%d", &valor);
        if (valor < 0 || valor > 10)
        {
          printf("Valor inválido! Digite novamente.\n");
        }
      } while (valor < 0 || valor > 10);
      matriz[i][j] = valor;
    }

  printf("\nMatriz informada:\n");
  for (i = 0; i < 2; i++)
    for (j = 0; j < 2; j++)
    {
      printf("%d ", matriz[i][j]);
    }
  printf("\n");
}