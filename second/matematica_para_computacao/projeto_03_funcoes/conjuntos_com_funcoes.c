#include <stdio.h>

void ordemCrescente(int *vetor, int tam)
{
  int i, j, temp;
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

int removeRepetido(int *vetor, int tam)
{
  int i, j, k = 0, repetido;
  int temp[tam];
  for (i = 0; i < tam; i++)
    temp[i] = vetor[i];
  for (i = 0; i < tam; i++)
  {
    repetido = 0;
    for (j = 0; j < k; j++)
    {
      if (vetor[i] == vetor[j])
      {
        repetido = 1;
        break;
      }
    }
    if (!repetido)
    {
      vetor[k++] = temp[i];
    }
  }
  return k;
}

void inserirValores(int *vetor, int tam)
{
  int i = 0, valor, j, repetido;
  printf("\nInsira valores para o vetor\n");
  while (i < tam)
  {
    printf("Entre com o valor: ");
    scanf("%d", &valor);
    repetido = 0;
    for (j = 0; j < i; j++)
    {
      if (vetor[j] == valor)
      {
        repetido = 1;
        printf("Esse valor ja existe.\n\n");
        break;
      }
    }
    if (!repetido)
    {
      vetor[i++] = valor;
    }
  }
  ordemCrescente(vetor, tam);
}

int uniao(int *a, int ta, int *b, int tb, int *res)
{
  int i, k = 0;
  for (i = 0; i < ta; i++)
    res[k++] = a[i];
  for (i = 0; i < tb; i++)
    res[k++] = b[i];
  k = removeRepetido(res, k);
  ordemCrescente(res, k);
  return k;
}

int interseccao(int *a, int ta, int *b, int tb, int *res)
{
  int i, j, k = 0;
  for (i = 0; i < ta; i++)
  {
    for (j = 0; j < tb; j++)
    {
      if (a[i] == b[j])
      {
        res[k++] = a[i];
        break;
      }
    }
  }
  k = removeRepetido(res, k);
  ordemCrescente(res, k);
  return k;
}

int diferenca(int *a, int ta, int *b, int tb, int *res)
{
  int i, j, k = 0, achou;
  for (i = 0; i < ta; i++)
  {
    achou = 0;
    for (j = 0; j < tb; j++)
    {
      if (a[i] == b[j])
      {
        achou = 1;
        break;
      }
    }
    if (!achou)
      res[k++] = a[i];
  }
  ordemCrescente(res, k);
  return k;
}

int diferencaSimetrica(int *a, int ta, int *b, int tb, int *res)
{
  int k = 0;
  k = diferenca(a, ta, b, tb, res);
  k += diferenca(b, tb, a, ta, res + k);
  k = removeRepetido(res, k);
  ordemCrescente(res, k);
  return k;
}

void subconjuntos(int *vetor, int tam)
{
  int i, j;
  printf("\nSubconjuntos do vetor:\n");
  for (i = 0; i < (1 << tam); i++)
  {
    printf("{ ");
    for (j = 0; j < tam; j++)
    {
      if (i & (1 << j))
        printf("%d ", vetor[j]);
    }
    if (i == 0)
      printf("∅");
    printf("}\n");
  }
}

int main()
{
  int tam = 5;
  int vetorA[tam], vetorB[tam], vetorC[tam * 2], vetorD[tam], vetorF[tam], vetorG[tam], vetorH[tam * 2];
  int tamC, tamD, tamF, tamG, tamH, i;

  printf("Teoria dos Conjuntos\nFatec Dr. Archimedes Lammoglia\nDSM - 2⁰Semestre\nMaio - 2025\nApolo Bastos Leonardi\nCaio Simonassi\nPedro Vinicius Rodrigues de souza\n\n");

  inserirValores(vetorA, tam);
  inserirValores(vetorB, tam);
  tamC = uniao(vetorA, tam, vetorB, tam, vetorC);
  printf("\nUnião A U B: ");
  for (i = 0; i < tamC; i++)
    printf("%d ", vetorC[i]);
  printf("\n");

  printf("Interseção A ∩ B: ");
  tamD = interseccao(vetorA, tam, vetorB, tam, vetorD);
  if (tamD == 0)
    printf("Vazio");
  else
    for (i = 0; i < tamD; i++)
      printf("%d ", vetorD[i]);
  printf("\n");

  printf("Diferença A - B: ");
  tamF = diferenca(vetorA, tam, vetorB, tam, vetorF);
  if (tamF == 0)
    printf("Vazio");
  else
    for (i = 0; i < tamF; i++)
      printf("%d ", vetorF[i]);
  printf("\n");

  printf("Diferença B - A: ");
  tamG = diferenca(vetorB, tam, vetorA, tam, vetorG);
  if (tamG == 0)
    printf("Vazio");
  else
    for (i = 0; i < tamG; i++)
      printf("%d ", vetorG[i]);
  printf("\n");

  printf("Diferença Simétrica A ∆ B: ");
  tamH = diferencaSimetrica(vetorA, tam, vetorB, tam, vetorH);
  if (tamH == 0)
    printf("Vazio");
  else
    for (i = 0; i < tamH; i++)
      printf("%d ", vetorH[i]);
  printf("\n");

  subconjuntos(vetorA, tam);

  return 0;
}
