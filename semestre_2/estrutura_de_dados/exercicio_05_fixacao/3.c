#include <stdio.h>
#include <locale.h>

void mensagem_entrada()
{
  printf("Digite um número: ");
}

int soma(int n1, int n2)
{
  return n1 + n2;
}

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int a, b, total;

  mensagem_entrada();
  scanf("%d", &a);

  mensagem_entrada();
  scanf("%d", &b);

  total = soma(a, b);

  printf("Soma: %d\n", total);

  return 0;
}
