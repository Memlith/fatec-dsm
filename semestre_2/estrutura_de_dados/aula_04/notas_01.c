#include <stdio.h>

int main()
{
  int id_aluno;
  float nota1, nota2, nota3, nota4, media;
  printf("Digite o id do aluno: ");
  scanf("%d", &id_aluno);

  printf("Seja bem-vindo, Aluno!\n");
  printf("Digite a nota 1: ");
  scanf("%f", &nota1);
  printf("Digite a nota 2: ");
  scanf("%f", &nota2);
  printf("Digite a nota 3: ");
  scanf("%f", &nota3);
  printf("Digite a nota 4: ");
  scanf("%f", &nota4);
  printf("Calculando suas notas...\n");
  media = (nota1 + nota2 + nota3 + nota4) / 4;

  if (media < 4)
  {
    printf("Aluno com ID: %d\nReprovado no Conceito E\n", id_aluno);
  }
  else
  {
    if (media < 6)
    {
      printf("Aluno com ID: %d\nReprovado no Conceito D\n", id_aluno);
    }
    else
    {
      if (media < 7.5)
      {
        printf("Aluno com ID: %d\nAprovado no Conceito C\n", id_aluno);
      }
      else
      {
        if (media < 9)
        {
          printf("Aluno com ID: %d\nAprovado no Conceito B\n", id_aluno);
        }
        else
        {
          if (media <= 10)
          {
            printf("Aluno com ID: %d\nAprovado no Conceito A,", id_aluno);
          }
        }
      }
    }
  }
}
