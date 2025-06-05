#include <stdio.h>

int main()
{
  int i, j, maior_valor, maior_linha, maior_coluna, matriz[4][4];

  printf("Insira um valor na matriz:\n");
  for (i = 0; i < 4; i++)
    for (j = 0; j < 4; j++)
    {
      printf("[%d x %d]-> ", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);
    }

  maior_valor = 0;
  maior_linha = 0;
  maior_coluna = 0;
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      if (matriz[i][j] > maior_valor)
      {
        maior_valor = matriz[i][j];
        maior_linha = i + 1;
        maior_coluna = j + 1;
      }
    }
  }

  printf("O maior valor da matriz é %d na posição [%d x %d].\n", maior_valor, maior_linha, maior_coluna);
}