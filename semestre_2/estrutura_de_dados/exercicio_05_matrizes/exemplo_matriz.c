#include <stdio.h>

int main()
{
  int linha, coluna, matriz[3][2] = {32, 25, 44, 2, 9, 87};

  printf("Matriz [3]x[2]\n");
  for (linha = 0; linha < 3; linha++)
  {
    for (coluna = 0; coluna < 2; coluna++)
    {
      printf("%d ", matriz[linha][coluna]);
    }
    printf("\n");
  }
}