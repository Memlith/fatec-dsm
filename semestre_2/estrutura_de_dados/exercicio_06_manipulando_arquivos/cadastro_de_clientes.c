#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *arquivo;
  char CPF[14], nome[50], telefone[15], resp;

  do
  {
    arquivo = fopen("clientes.txt", "a");

    if (arquivo == NULL)
    {
      perror("Erro ao abrir arquivo"); // mostra o erro do sistema
      exit(1);
    }

    // system("cls");  // uso linux e não funciona
    printf("Cadastro de Clientes\n");

    printf("\nCPF - Modelo: 332.569.963-51: ");
    scanf(" %[^\n]", CPF);

    printf("\nNome Completo: ");
    scanf(" %[^\n]", nome);

    printf("\nTelefone - Modelo: (19)99245-8503: ");
    scanf(" %[^\n]", telefone);

    fprintf(arquivo, "%s | %s | %s\n", nome, CPF, telefone);
    fclose(arquivo);

    do
    {
      printf("\nDeseja cadastrar outro cliente (s/n)? ");
      scanf(" %c", &resp);
    } while (resp != 's' && resp != 'S' && resp != 'n' && resp != 'N');

  } while (resp == 's' || resp == 'S');

  return 0;
}
