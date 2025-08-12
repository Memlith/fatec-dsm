#include <stdio.h>
#include <locale.h>

float entrada_dados()
{
  float numero;
  printf("Informe um número: ");
  scanf("%f", &numero);
  return numero;
}

float soma(float n1, float n2)
{
  return n1 + n2;
}

void exibir_resultado(float valor)
{
  printf("\n%.1f\n", valor);
}

int main()
{
  setlocale(LC_ALL, "Portuguese");

  float A = entrada_dados();
  float B = entrada_dados();

  float resultado = soma(A, B);
  exibir_resultado(resultado);

  return 0;
}
