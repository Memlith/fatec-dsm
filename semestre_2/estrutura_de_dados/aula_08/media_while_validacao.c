#include <stdio.h>

void clean_buffer()
{
  char c;
  while ((c = getchar()) != EOF && c != '\n')
    ;
}
void stop_system()
{
  clean_buffer();
  printf("Pressione ENTER para continuar...\n");
  getchar();
}

int main()
{
  char nome[100], resp;
  float nota, soma, media;
  int i;

  do
  {
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", &nome);

    soma = 0;
    for (i = 0; i < 4; i++)
    {
      printf("Digite a nota %d: ", i + 1);
      scanf("%f", &nota);
      soma += nota;
    }

    media = soma / 4.0;
    printf("\nAluno: %s | Media: %.1f\n", nome, media);

    do
    {
      printf("Deseja inserir mais um aluno? [S/N]: ");
      scanf(" %c", &resp);

      if ((resp != 's') && (resp != 'S') && (resp != 'n') && (resp != 'N'))
      {
        printf("Resposta inválida, Digite apenas S ou N\n");
        stop_system();
      }

    } while ((resp != 's') && (resp != 'S') && (resp != 'n') && (resp != 'N'));
  } while ((resp == 's') || (resp == 'S'));

  printf("Programa encerrado\n");
  stop_system();

  return 0;
}
