#include <stdio.h>
#include <stdlib.h>

int main()
{
  char linha[100];
  FILE *arquivo = fopen("clientes.txt", "r");

  if (arquivo == NULL)
  {
    printf("Erro ao abrir arquivo.\n");
    exit(0);
  }

  printf("Dados cadastrados:\n");

  while (fgets(linha, 100, arquivo))
  {
    printf("%s", linha);
  }

  fclose(arquivo);

  return 0;
}
