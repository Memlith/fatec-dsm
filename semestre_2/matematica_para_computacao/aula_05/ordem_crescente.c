#include <stdio.h>
int main()
{
  int contador, i, j, chave, valor, temp, tam = 5;
  // printf("Escolha o tamanho desejado dos vetores\n");
  // scanf("%d", &tam);
  int vetorA[tam], vetorB[tam], vetorC[tam * 2], vetor_temp[tam * 2];

  // classificação em ordem crescente
  for (i = 1; i < 5; i++)
  {
    for (j = i + 1; j <= 5; j++)
    {
      if (vetorA[i] > vetorA[j])
      {
        temp = vetorA[i];
        vetorA[i] = vetorA[j];
        vetorA[j] = temp;
      }
    }
  }
  printf("Imprimindo vetor A em ordem crescente");
  for (i = 1; i <= 5; i++)
    printf("\n%d", vetorA[i]);
  printf("\n");
}