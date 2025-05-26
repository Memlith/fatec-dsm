#include <stdio.h>
#include <string.h>

int main()
{
  int i, chave = 0;
  char esporte[5][15] = {"futebol", "volei", "basquete", "tenis", "ciclismo"};
  char busca[50];

  printf("Digire um esporte para pesquisar: ");
  scanf("%s", busca);

  for (i = 0; i < 5; i++)
  {
    if (strcmp(busca, esporte[i]) == 0)
    {
      printf("Encontrado: %s", esporte[i]);
      chave = 1;
    }
  }
  if (chave == 0)
  {
    printf("%s não encontrado", busca);
  }
  printf("\n");
}