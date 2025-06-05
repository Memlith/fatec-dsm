#include <stdio.h>

int main()
{
  int i, j, linha, coluna;

  printf("informe o numero de linhas da matriz: ");
  scanf("%d", &linha);
  printf("informe o numero de colunas da matriz: ");
  scanf("%d", &coluna);

  int matrizA[linha][coluna], matrizB[linha][coluna];

  printf("Insira valores na matriz A:\n");
  for (i = 0; i < linha; i++)
    for (j = 0; j < coluna; j++)
    {
      printf("[%d x %d]-> ", i + 1, j + 1);
      scanf("%d", &matrizA[i][j]);
    }

  printf("Imprimindo valores da matriz B:\n");
  for (i = 0; i < linha; i++)
    for (j = 0; j < coluna; j++)
    {
      matrizB[i][j] = matrizA[i][j] * matrizA[i][j];
      printf("\n[%d x %d]-> %d", i + 1, j + 1, matrizB[i][j]);
    }
}