#include <stdio.h>

// func() para ordem crescente dos vetores
void ordemCrescente(int *vetor, int tam)
{
  int i, j, temp;
  // Aplica ordem crescente
  for (i = 0; i < tam; i++)
  {
    for (j = i + 1; j < tam; j++)
    {
      if (vetor[i] > vetor[j])
      {
        temp = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = temp;
      }
    }
  }
}

// func() para remover numeros repetidos
void removeRepetido(int *vetor, int tam)
{
  int contador, chave, i, j;
  int vetor_temp[tam];
  // Remove os repetidos
  contador = 0;
  chave = 0;
  vetor[0] = vetor_temp[0];
  for (i = 1; i <= tam * 2; i++)
  {
    for (j = 0; j <= contador; j++)
      if (vetor_temp[i] == vetor[j])
        chave = 1;
    if (chave == 0)
    {
      contador++;
      vetor[contador] = vetor_temp[i];
    }
    chave = 0;
  }
}
// func() para inserção de valores nos vetores
void inserirValores(int *vetor, int tam)
{
  int chave, contador, i, valor;
  // Insere valores não repetidos no vetor
  printf("\nInsira valores para o vetor\n");
  contador = 0;
  while (contador < tam)
  {
    if (contador == 0)
    {
      printf("Entre com o valor: ");
      scanf("%d", &vetor[contador]);
      contador++;
    }
    else
    {
      chave = 0;
      printf("Entre com o valor: ");
      scanf("%d", &valor);
      for (i = 0; i < contador; i++)
        if (vetor[i] == valor)
          chave = 1;
      if (chave == 0)
      {
        vetor[contador] = valor;
        contador++;
      }
      else
      {
        printf("Esse valor ja existe.\n\n");
      }
    }
  }
  ordemCrescente(&vetor[0], tam);
}

// func() para união dos vetores
void aplicaUniao(int *vetor1, int *vetor2, int *vetor3, int tam)
{
  int i, tam3;
  // Aplica União
  printf("\nUnião dos vetores");
  tam3 = 0;
  for (i = 0; i < tam; i++)
  {
    vetor3[i] = vetor1[i];
    vetor3[i + tam] = vetor2[i];
  }

  removeRepetido(&vetor3, tam);
  ordemCrescente(&vetor3, tam);
}

// func() main
int main()
{
  int contador, i, j, chave, valor, temp, tam = 5, tamG, tamF;
  int vetorA[tam], vetorB[tam], vetorC[tam * 2], vetorD[tam * 2], vetorF[tam * 2], vetorG[tam * 2], vetorH[tam * 2], vetor_temp[tam * 2];

  // Titulo
  printf("Teoria dos Conjuntos\nFatec Dr. Archimedes Lammoglia\nDSM - 2⁰Semestre\nAbril - 2025\n\n");

  // chamada da func() para inserir valores no vetor
  inserirValores(&vetorA[0], tam);
  inserirValores(&vetorB[0], tam);
  aplicaUniao(vetorA, vetorB, &vetorC, tam);

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

  // Impressão dos valores
  printf("\nImprimindo vetor AUB");
  for (i = 0; i < contador; i++)
    printf("\n[%d] - %d", i + 1, vetorC[i]);
  printf("\n");
  /*




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
    */
}
