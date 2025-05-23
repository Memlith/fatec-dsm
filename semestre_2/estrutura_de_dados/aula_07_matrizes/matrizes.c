#include <stdio.h>

int main()
{
  int i, j, matriz[3][3];

  printf("Preenchendo a matriz...\n");
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
    {
      printf("[%d] x [%d] -> ", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);
    }

  printf("\nImprimindo a matriz");
  for (i = 0; i < 3; i++)
  {
    printf("\n");
    for (j = 0; j < 3; j++)
    {
      printf("%d  ", matriz[i][j]);
    }
  }
  printf("\n");
}