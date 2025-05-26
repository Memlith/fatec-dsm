#include <stdio.h>

int main()
{
  int i, tamanho = 5;
  char funcionarios[tamanho][20];
  float salarios[tamanho], reajuste;
  for (i = 0; i < tamanho; i++)
  {
    printf("\nNome do funcionario %dº: ", i + 1);
    scanf("%s", funcionarios[i]);
    printf("Salario: ");
    scanf("%f", &salarios[i]);
  }
  printf("\nDigite a porcentagem do reajuste salarial: ");
  scanf("%f", &reajuste);
  reajuste = (reajuste / 100) + 1;
  printf("\nListando funcionarios com salario atualizado");
  for (i = 0; i < tamanho; i++)
  {
    salarios[i] *= reajuste;
    printf("\nFunicionario: %s - R$%.2f", funcionarios[i], salarios[i]);
  }
  printf("\n");
}