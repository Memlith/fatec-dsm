#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *arquivo;
  char nomeArquivo[100];
  printf("Digite o nome do arquivo (com a extensão): ");
  scanf(" %s", nomeArquivo);
  arquivo = fopen(nomeArquivo, "w");

  if (arquivo == NULL)
  {
    printf("Houve um erro ao abrir o arquivo.\n");
    exit(0);
  }
  else
  {
    printf("Arquivo teste.txt criado com sucesso!\n");
  }

  fclose(arquivo);

  return 0;
}
