#include <stdio.h>

int main()
{
  float matrizA[10][10], inversaA[10][10], matrizTemp[10][20], temp;
  int linhaA, colunaA, i, j, k, det;

  // input das dimensões de A
  printf("Inversão de Matriz\n\nDigite o número de linhas e colunas da matriz A.\n");
  printf("ATENÇÃO: Numero de linhas deve ser igual ao de colunas para que a matriz seja inversivel!\nNumero de Linhas (máximo 10):  ");
  scanf(" %d", &linhaA);

  // checaegem das dimensões
  if (linhaA > 10)
  {
    printf("\nErro: linhas e colunas devem ser <= 10.\n");
    return 1;
  }

  printf("Numero de Colunas (máximo 10):  ");
  scanf(" %d", &colunaA);

  // checaegem das dimensões
  if (colunaA > 10)
  {
    printf("\nErro: linhas e colunas devem ser <= 10.\n");
    return 1;
  }

  // verifica se linha e coluna da matriz é quadrada para calcular a inversa
  if (linhaA != colunaA)
  {
    printf("\nErro: Matriz A não é quadrada, exemplo -> [5 x 5], [3 x 3].\nMatriz A -> [%d x %d]\n", linhaA, colunaA);
    return 1;
  }

  // Inserçao de valores na matriz A
  printf("\nDigite os valores da matriz A [%d x %d]:\n", linhaA, colunaA);
  for (i = 0; i < linhaA; i++)
    for (j = 0; j < colunaA; j++)
    {
      printf("[%d x %d] -> ", i + 1, j + 1);
      scanf(" %f", &matrizA[i][j]);
    }

  // cria matriz aumentada [A | I], matriz com tamanho de no max 10x20
  for (i = 0; i < linhaA; i++)
  {
    for (j = 0; j < linhaA; j++)
    {
      matrizTemp[i][j] = matrizA[i][j];

      if (i == j)
      {
        matrizTemp[i][j + linhaA] = 1;
      }
      else
      {
        matrizTemp[i][j + linhaA] = 0;
      }
    }
  }

  // checa o determinante
  for (i = 0; i < linhaA; i++)
  {
    // valor deve ser diferente de zero para evitar divisão por zero
    det = 0;
    if (matrizTemp[i][i] == 0)
    {
      for (j = i + 1; j < linhaA; j++)
      {
        if (matrizTemp[j][i] != 0)
        {
          // troca linhas
          for (k = 0; k < 2 * linhaA; k++)
          {
            temp = matrizTemp[i][k];
            matrizTemp[i][k] = matrizTemp[j][k];
            matrizTemp[j][k] = temp;
          }
          det = 1;
          break;
        }
      }
      if (!det)
      {
        printf("\nErro: Não é possivel inverter a Matriz A, pois a matriz é singular ( determinante == 0 ).\n");
        return 1;
      }
    }

    // alinhamento
    temp = matrizTemp[i][i];
    for (j = 0; j < 2 * linhaA; j++)
    {
      matrizTemp[i][j] /= temp;
    }

    // Zera elesmentos na coluna
    for (j = 0; j < linhaA; j++)
    {
      if (j != i)
      {
        temp = matrizTemp[j][i];
        for (k = 0; k < 2 * linhaA; k++)
        {
          matrizTemp[j][k] -= temp * matrizTemp[i][k];
        }
      }
    }
  }

  // escreve a matriz inversa inversa para matriz inversaA
  for (i = 0; i < linhaA; i++)
  {
    for (j = 0; j < linhaA; j++)
    {
      inversaA[i][j] = matrizTemp[i][j + linhaA];
    }
  }

  // imprime matriz
  printf("\nImprimindo Matriz inversa de A [%d x %d]:\n", linhaA, linhaA);
  for (i = 0; i < linhaA; i++)
  {
    for (j = 0; j < linhaA; j++)
    {
      printf("%8.3f ", inversaA[i][j]);
    }
    printf("\n");
  }
  printf("\n\n\nFim do programa.\n");
  return 0;
}