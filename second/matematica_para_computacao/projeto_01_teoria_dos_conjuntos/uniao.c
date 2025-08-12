#include <stdio.h>
int main()
{
  int contador, i, j, chave, valor, temp, tam = 5;
  // printf("Escolha o tamanho desejado dos vetores\n");
  // scanf("%d", &tam);
  int vetorA[tam], vetorB[tam], vetorC[tam * 2], vetor_temp[tam * 2];

  // União de dois vetores
  printf("\nUnião dos vetores A e B para formar o vetor C\nInsira valores para o vetor A\n");
  // Inserção de valores
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
  printf("\nInsira valores para o vetor B\n");
  contador = 0;
  while (contador < tam)
  {
    if (contador == 0)
    {
      printf("Entre com o valor: ");
      scanf("%d", &vetorB[contador]);
      contador++;
    }
    else
    {
      chave = 0;
      printf("Entre com o valor: ");
      scanf("%d", &valor);
      for (i = 0; i < contador; i++)
        if (vetorB[i] == valor)
          chave = 1;
      if (chave == 0)
      {
        vetorB[contador] = valor;
        contador++;
      }
      else
      {
        printf("\nEsse valor ja existe.\n");
      }
    }
  }
  // Aplica União
  for (i = 0; i < tam; i++)
  {
    vetor_temp[i] = vetorA[i];
    vetor_temp[i + tam] = vetorB[i];
  }
  // Remove os repetidos
  contador = 0;
  chave = 0;
  vetorC[0] = vetor_temp[0];
  for (i = 1; i <= tam * 2; i++)
  {
    for (j = 0; j <= contador; j++)
      if (vetor_temp[i] == vetorC[j])
        chave = 1;
    if (chave == 0)
    {
      contador++;
      vetorC[contador] = vetor_temp[i];
    }
    chave = 0;
  }
  // Aplica ordem crescente
  for (i = 0; i < contador; i++)
  {
    for (j = i + 1; j < contador; j++)
    {
      if (vetorC[i] > vetorC[j])
      {
        temp = vetorC[i];
        vetorC[i] = vetorC[j];
        vetorC[j] = temp;
      }
    }
  }
  // Impressão dos valores
  printf("\nImprimindo vetor C");
  for (i = 0; i < contador; i++)
    printf("\n[%d] - %d", i + 1, vetorC[i]);
  printf("\n");
}