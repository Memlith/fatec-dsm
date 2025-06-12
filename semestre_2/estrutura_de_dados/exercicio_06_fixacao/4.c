#include <stdio.h>
#include <locale.h>

float ler_nota()
{
  float n;
  printf("Digite a nota: ");
  scanf("%f", &n);
  return n;
}

void media(float n1, float n2)
{
  float resultado = (n1 + n2) / 2;

  if (resultado >= 7)
  {
    printf("Média = %.1f - Aprovado\n", resultado);
  }
  else
  {
    printf("Média = %.1f - Reprovado\n", resultado);
  }
}

int main()
{
  setlocale(LC_ALL, "Portuguese");

  float a = ler_nota();
  float b = ler_nota();

  media(a, b);

  return 0;
}
