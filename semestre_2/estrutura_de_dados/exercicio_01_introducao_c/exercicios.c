#include <stdio.h>

int main()
{
  float nota1, nota2, nota3, nota4, media;
  printf("Digite a nota 1: ");
  scanf("%f", &nota1);
  printf("Digite a nota 2: ");
  scanf("%f", &nota2);
  printf("Digite a nota 3: ");
  scanf("%f", &nota3);
  printf("Digite a nota 4: ");
  scanf("%f", &nota4);
  media = (nota1 + nota2 + nota3 + nota4) / 4;
  // printf("A media das notas = %.1f", media);
  if (media >= 7)
  {
    printf("Aprovado com a media: %.1f\n", media);
  }
  else
  {
    printf("Reprovado com a media: %.1f\n", media);
  }
  printf("Nota 1: %.1f\nNota 2: %.1f\nNota 3: %.1f\nNota 4: %.1f\n", nota1, nota2, nota3, nota4);
  return 0;
}
