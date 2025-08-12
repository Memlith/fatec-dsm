#include <stdio.h>
int main()
{
  int contador, i, j, chave, valor, temp, tam = 5;
  // printf("Escolha o tamanho desejado dos vetores\n");
  // scanf("%d", &tam);
  int vetorA[tam], vetorB[tam], vetorC[tam * 2], vetor_temp[tam * 2];

  // Forma um vetorB atraves dos elementos não repetidos do vetorA (não vazio)
  printf("\nFormando um vetor B atraves dos elementos não repetidos do vetor A\nInsira valores para o vetor A\n");
  // Inserção de valores
  for (i = 0; i < tam; i++)
  {
    printf("Entre com o valor: ");
    scanf("%d", &vetorA[i]);
  }
  // Remove os repetidos
  contador = 0;
  chave = 0;
  vetorB[0] = vetorA[0];
  for (i = 1; i <= tam; i++)
  {
    for (j = 0; j <= contador; j++)
      if (vetorA[i] == vetorB[j])
        chave = 1;
    if (chave == 0)
    {
      contador++;
      vetorB[contador] = vetorA[i];
    }
    chave = 0;
  }
  // Aplica ordem crescente
  for (i = 0; i < contador; i++)
  {
    for (j = i + 1; j < contador; j++)
    {
      if (vetorB[i] > vetorB[j])
      {
        temp = vetorB[i];
        vetorB[i] = vetorB[j];
        vetorB[j] = temp;
      }
    }
  }
  // Impressão dos valores
  printf("\nImprimindo vetor B");
  for (i = 0; i < contador; i++)
    printf("\n[%d] - %d", i + 1, vetorB[i]);
  printf("\n");
}