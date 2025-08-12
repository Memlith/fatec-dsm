#include <stdio.h>

int main()
{
  int numbers[100], i, j, quant, temp;

  printf("Digite a quantidade de numeros que deseja ordenar: ");
  scanf("%d", &quant);

  for (i = 0; i < quant; i++)
  {
    printf("Insira um valor para adicionar no vetor: ");
    scanf("%d", &numbers[i]);
  }

  for (j = 0; j < quant; j++)
  {
    for (i = 0; i < quant; i++)
    {
      if (numbers[i] > numbers[i + 1])
      {
        temp = numbers[i];
        numbers[i] = numbers[i + 1];
        numbers[i + 1] = temp;
      }
    }
  }

  for (i = 0; i < quant; i++)
  {
    printf("[%d] -> %d\n", i + 1, numbers[i]);
  }
}