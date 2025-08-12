#include <stdio.h>

int main()
{
  int linha, coluna, matriz[3][3];

  printf("Insira os valores na matriz:\n"); // inserção de valores na matriz 3 x 3
  for (linha = 0; linha < 3; linha++)
    for (coluna = 0; coluna < 3; coluna++)
    {
      printf("[%d] x [%d] -> ", linha + 1, coluna + 1);
      scanf("%d", &matriz[linha][coluna]);
    }
  printf("\n");

  printf("valores na matriz:\n");
  for (linha = 0; linha < 3; linha++) // imprime todos os valores da matriz
  {
    for (coluna = 0; coluna < 3; coluna++)
    {
      printf(" %d ", matriz[linha][coluna]);
    }
    printf("\n");
  }
  printf("\n");

  printf("valores PARES na matriz:\n");
  for (linha = 0; linha < 3; linha++) // imprime todos os valores PARES da matriz
  {
    for (coluna = 0; coluna < 3; coluna++)
    {
      if (matriz[linha][coluna] % 2 == 0)
        printf(" %d ", matriz[linha][coluna]);
      else
        printf("   ");
    }
    printf("\n");
  }
  printf("\n");

  printf("valores IMPARES na matriz:\n");
  for (linha = 0; linha < 3; linha++) // imprime todos os valores IMPARES da matriz
  {
    for (coluna = 0; coluna < 3; coluna++)
    {
      if (matriz[linha][coluna] % 2 == 1)
        printf(" %d ", matriz[linha][coluna]);
      else
        printf("   ");
    }
    printf("\n");
  }
  printf("\n");
}