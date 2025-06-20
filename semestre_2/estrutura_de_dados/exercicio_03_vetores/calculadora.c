#include <stdio.h>

void insereValores(int *vetor) // insere valores no vetor
{
  int i;
  for (i = 0; i < 5; i++)
  {
    printf("Insira o valor que deseja adicionar ao vetor: ");
    scanf("%d", &vetor[i]);
  }
  printf("Vetor cheio.\n");
  printf("\n");
}

void imprimeValores(int *vetor)
{
  int i;
  printf("Imprimindo vetor:\n");
  for (i = 0; i < 5; i++)
  {
    printf("[%d] -> %d\n", i, vetor[i]);
  }
  printf("\n");
}

void maiorNumero(int *vetor) // pega maior numero do vetor
{
  int maior, i;
  maior = vetor[0];
  for (i = 0; i < 5; i++)
  {
    if (vetor[i] > maior)
      maior = vetor[i];
  }
  printf("\nMaior numero do vetor: %d", maior);
  printf("\n");
}

int main()
{
  int vetorA[5], vetorB[5], vetorC[5], i, opcao, maior;

  insereValores(&vetorA[0]);
  insereValores(&vetorB[0]);
  maiorNumero(vetorA);

  printf("\n");
  printf("\nSelecione uma opção:\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n0-Sair\n-> ");
  scanf("%d", &opcao);

  switch (opcao) // menu de opções para calcular os vetores
  {
  case 1: // soma
    for (i = 0; i < 5; i++)
    {
      vetorC[i] = vetorA[i] + vetorB[i];
    }
    imprimeValores(vetorC);
    break;
  case 2: // subtração
    for (i = 0; i < 5; i++)
    {
      vetorC[i] = vetorA[i] - vetorB[i];
    }
    imprimeValores(vetorC);
    break;
  case 3: // multiplicação
    for (i = 0; i < 5; i++)
    {
      vetorC[i] = vetorA[i] * vetorB[i];
    }
    imprimeValores(vetorC);
    break;
  case 4: // divisão
    for (i = 0; i < 5; i++)
    {
      vetorC[i] = vetorA[i] / vetorB[i];
    }
    imprimeValores(vetorC);
    break;
  default:
    printf("Escolha invalida, tente novamente.");
    break;
  }

  printf("\n\nFim do Programa.");
  return 0;
}