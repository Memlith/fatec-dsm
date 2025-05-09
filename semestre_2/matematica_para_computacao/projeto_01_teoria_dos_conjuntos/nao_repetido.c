#include <stdio.h>
int main()
{
  int contador, i, j, chave, valor, temp, tam = 5;
  // printf("Escolha o tamanho desejado dos vetores\n");
  // scanf("%d", &tam);
  int vetorA[tam], vetorB[tam], vetorC[tam * 2], vetor_temp[tam * 2];

  // Adiciona um elemento não repetido a um vetor
  printf("\nColocando elementos não repetidos em um vetor\nInsira valores para o vetor A\n");
  contador = 0;
  while (contador < tam)
  {
    if (contador == 0)
    {
      printf("Entre com o valor: ");
      scanf("%d", &vetorA[contador]);
      contador++;
    }
    else
    {
      chave = 0;
      printf("Entre com o valor: ");
      scanf("%d", &valor);
      for (i = 0; i < contador; i++)
        if (vetorA[i] == valor)
          chave = 1;
      if (chave == 0)
      {
        vetorA[contador] = valor;
        contador++;
      }
      else
      {
        printf("\nEsse valor ja existe.\n");
      }
    }
  }
  // Aplica ordem crescente
  for (i = 0; i < tam; i++)
  {
    for (j = i + 1; j < tam; j++)
    {
      if (vetorA[i] > vetorA[j])
      {
        temp = vetorA[i];
        vetorA[i] = vetorA[j];
        vetorA[j] = temp;
      }
    }
  }
  // Impressão dos valores
  printf("\nImprimindo vetor A");
  for (i = 0; i < tam; i++)
    printf("\n[%d] - %d", i + 1, vetorA[i]);
  printf("\n");
}