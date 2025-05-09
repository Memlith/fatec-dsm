#include <stdio.h>

int main()
{
  float matrizA[10][10], matrizB[10][10], matrizC[10][10];
  int linhaA, colunaA, linhaB, colunaB, i, j, k;

  // input das dimensões de A
  printf("Multiplicação de Matrizes\n\nDigite o número de linhas e colunas da matriz A.\n");
  printf("Numero de Linhas (máximo 10):  ");
  scanf("%d", &linhaA);
  printf("Numero de Colunas (máximo 10):  ");
  scanf("%d", &colunaA);

  // checaegem das dimensões
  if (linhaA > 10 || colunaA > 10)
  {
    printf("\nErro: linhas e colunas devem ser <= 10.\n");
    return 1;
  }

  printf("\nATENÇÃO: Numero de Colunas de A deve ser o mesmo numero de Linhas de B.\n");
  // Input das dimensões de B
  printf("\nDigite o número de linhas e colunas da matriz B.\n");
  printf("Numero de Linhas (máximo 10):  ");
  scanf("%d", &linhaB);
  printf("Numero de Colunas (máximo 10):  ");
  scanf("%d", &colunaB);

  // checaegem das dimensões
  if (linhaB > 10 || colunaB > 10)
  {
    printf("\nErro: linhas e colunas devem ser <= 10.\n");
    return 1;
  }

  if (colunaA != linhaB)
  {
    printf("\nErro: numero de colunas de A deve ser igual ao número de linhas de B.\n");
    return 1;
  }

  // Inserção de valores na matriz A
  printf("\nDigite os valores da matriz A [%d x %d]:\n", linhaA, colunaA);
  for (i = 0; i < linhaA; i++)
    for (j = 0; j < colunaA; j++)
    {
      printf("[%d x %d] -> ", i + 1, j + 1);
      scanf(" %f", &matrizA[i][j]);
    }
  // inserção de valores na matriz B
  printf("\nDigite os valores da matriz B [%d x %d]:\n", linhaB, colunaB);
  for (i = 0; i < linhaB; i++)
    for (j = 0; j < colunaB; j++)
    {
      printf("[%d x %d] -> ", i + 1, j + 1);
      scanf(" %f", &matrizB[i][j]);
    }

  // Multiplicação das matrizes A e B
  for (i = 0; i < linhaA; i++)
  {
    for (j = 0; j < colunaB; j++)
    {
      matrizC[i][j] = 0;
      for (k = 0; k < colunaA; k++)
      {
        matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
      }
    }
  }

  // imprimindo resultado da multiplicação de matrizes
  printf("\nResultados da multiplicação A x B = C");
  printf("\nImprimindo matriz C [%d x %d]:\n", linhaA, colunaB);
  for (i = 0; i < linhaA; i++)
  {
    for (j = 0; j < colunaB; j++)
    {
      printf("%6.3f ", matrizC[i][j]);
    }
    printf("\n");
  }
  printf("\n\n\nFim do programa.\n");
  return 0;
}
