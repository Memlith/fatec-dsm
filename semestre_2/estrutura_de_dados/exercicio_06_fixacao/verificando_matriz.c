#include <stdio.h>

int main()
{
  int i, j, maior, menor, entre, matriz[2][3];
  char opcao;

  do
  {
    for (i = 0; i < 2; i++)
      for (j = 0; j < 3; j++)
      {
        printf("Insira um valor na matriz: ");
        scanf("%d", &matriz[i][j]);
      }
    maior = 0;
    menor = 0;
    entre = 0;
    for (i = 0; i < 2; i++)
      for (j = 0; j < 3; j++)
      {
        if (matriz[i][j] < 100)
          menor++;
        if (matriz[i][j] > 400)
          maior++;
        if (matriz[i][j] <= 400 && matriz[i][j] >= 100)
          entre++;
      }
    printf("\nNumeros menores que 100: %d\n", menor);
    printf("Numeros entre 100 e 400: %d\n", entre);
    printf("Numeros maiores que 400: %d\n", maior);

    do
    {
      printf("\nDeseja inserir outros valores? (s/n): ");
      scanf(" %c", &opcao);
      if (opcao != 's' && opcao != 'n')
        printf("Opcao invalida. Digite 's' para sim ou 'n' para nao.\n");
    } while (opcao != 's' && opcao != 'n');

  } while (opcao == 's');
}