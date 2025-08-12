#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *arquivo;
  char frase[100];

  arquivo = fopen("teste.txt", "a");

  if (arquivo == NULL)
  {
    printf("Houve um erro ao abrir o arquivo.\n");
    exit(0);
  }

  printf("Entre com a frase a ser gravada no arquivo: ");
  scanf(" %[^\n]", frase);

  fprintf(arquivo, "%s\n", frase);

  fclose(arquivo);

  return 0;
}
