#include <stdio.h>
#include <stdlib.h>
int main()
{
  int contador, i, j, chave, valor, temp, tam = 5, tamG, tamF;
  int vetorA[tam], vetorB[tam], vetorC[tam * 2], vetorD[tam * 2], vetorF[tam * 2], vetorG[tam * 2], vetorH[tam * 2], vetor_temp[tam * 2];

  // Titulo
  printf("Teoria dos Conjuntos\nFatec Dr. Archimedes Lammoglia\nDSM - 2⁰Semestre\nAbril - 2025\n\n");

  // Inserção de valores
  printf("\nInsira valores para o vetor A\n");
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
        printf("Esse valor ja existe.\n\n");
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
        printf("Esse valor ja existe.\n\n");
      }
    }
  }

  // Limpa Console
  // system("clear");

  // Impressão dos valores
  printf("\nImprimindo vetor A");
  for (i = 0; i < tam; i++)
    printf("\n[%d] - %d", i + 1, vetorA[i]);
  printf("\n");
  printf("\nImprimindo vetor B");
  for (i = 0; i < tam; i++)
    printf("\n[%d] - %d", i + 1, vetorB[i]);
  printf("\n");

  // Aplica União
  printf("\nUnião dos vetores A e B");
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
  printf("\nImprimindo vetor AUB");
  for (i = 0; i < contador; i++)
    printf("\n[%d] - %d", i + 1, vetorC[i]);
  printf("\n");

  // Aplica Intersecção
  printf("\nIntersecção dos vetores A e B");
  contador = 0;
  for (i = 0; i < tam; i++)
  {
    for (j = 0; j < tam; j++)
    {
      if (vetorA[i] == vetorB[j])
      {
        vetorD[contador] = vetorA[i];
        contador++;
      }
    }
  }

  // Aplica ordem crescente
  for (i = 0; i < contador; i++)
  {
    for (j = i + 1; j < contador; j++)
    {
      if (vetorD[i] > vetorD[j])
      {
        temp = vetorD[i];
        vetorD[i] = vetorD[j];
        vetorD[j] = temp;
      }
    }
  }

  // Impressão dos valores
  printf("\nImprimindo vetor A∩B");
  if (contador == 0)
  {
    printf("\nVetor vazio");
  }
  else
  {
    for (i = 0; i < contador; i++)
      printf("\n[%d] - %d", i + 1, vetorD[i]);
  }
  printf("\n");

  // Aplica Complemetar de A em B
  printf("\nDiferenças de A em B");
  contador = 0;
  for (i = 0; i < tam; i++)
  {
    chave = 0;
    for (j = 0; j < tam; j++)
      if (vetorC[i] == vetorD[j])
        chave = 1;
    if (chave == 0)
    {
      vetorF[contador] = vetorC[i];
      contador++;
    }
  }
  tamF = contador;

  // Aplica ordem crescente
  for (i = 0; i < contador; i++)
  {
    for (j = i + 1; j < contador; j++)
    {
      if (vetorF[i] > vetorF[j])
      {
        temp = vetorF[i];
        vetorF[i] = vetorF[j];
        vetorF[j] = temp;
      }
    }
  }

  // Impressão dos valores
  printf("\nImprimindo vetor A-B");
  if (contador == 0)
  {
    printf("\nVetor vazio");
  }
  else
  {
    for (i = 0; i < contador; i++)
      printf("\n[%d] - %d", i + 1, vetorF[i]);
  }
  printf("\n");

  // Aplica Complemetar de B em A
  printf("\nDiferenças de B em A");
  contador = 0;
  for (i = 0; i < tam; i++)
  {
    chave = 0;
    for (j = 0; j < tam; j++)
      if (vetorB[i] == vetorA[j])
        chave = 1;
    if (chave == 0)
    {
      vetorG[contador] = vetorB[i];
      contador++;
    }
  }
  tamG = contador;

  // Aplica ordem crescente
  for (i = 0; i < contador; i++)
  {
    for (j = i + 1; j < contador; j++)
    {
      if (vetorG[i] > vetorG[j])
      {
        temp = vetorG[i];
        vetorG[i] = vetorG[j];
        vetorG[j] = temp;
      }
    }
  }

  // Impressão dos valores
  printf("\nImprimindo vetor B-A");
  if (contador == 0)
  {
    printf("\nVetor vazio");
  }
  else
  {
    for (i = 0; i < contador; i++)
      printf("\n[%d] - %d", i + 1, vetorG[i]);
  }
  printf("\n");

  // União do vetor A-B com B-A
  printf("\nDiferença simetrica de A e B");
  contador = 0;
  for (i = 0; i < tamF; i++)
  {
    vetorH[contador] = vetorF[i];
    contador++;
  }
  for (i = 0; i < tamG; i++)
  {
    vetorH[contador] = vetorG[i];
    contador++;
  }

  // Aplica ordem crescente
  for (i = 0; i < contador; i++)
  {
    for (j = i + 1; j < contador; j++)
    {
      if (vetorH[i] > vetorH[j])
      {
        temp = vetorH[i];
        vetorH[i] = vetorH[j];
        vetorH[j] = temp;
      }
    }
  }

  // Impressão dos valores
  printf("\nImprimindo vetor A∆B");
  if (contador == 0)
  {
    printf("\nVetor vazio");
  }
  else
  {
    for (i = 0; i < contador; i++)
      printf("\n[%d] - %d", i + 1, vetorH[i]);
  }
  printf("\n");

  // Partes do vetor A
  printf("\nSubconjuntos do vetor A");
  printf("\nImprimindo vetor p(A)\n");
  for (i = 0; i < 1 << tam; i++)
  {
    printf("[%d] - ", i + 1);
    for (j = 0; j < tam; j++)
    {
      if (i & (1 << j))
      {
        printf("%d ", vetorA[j]);
      }
    }
    if (i == 0)
      printf("∅");
    printf("\n");
  }
}