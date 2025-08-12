#include <stdio.h>

int fibonacci(int n)
{
  int i, a, b, c;
  a = 0;
  b = 1;
  for (i = 0; i < n; i++) // repete o laço ate a posição fornecida
  {
    if (i == 0)
      printf("%d ", a);
    else if (i == 1)
      printf("%d ", b);
    else
    {
      c = a + b; // ele pega o numero atual e soma com o anterior
      printf("%d ", c);
      a = b;
      b = c;
    }
  }
}

int main()
{
  int n;
  printf("Digite a posição de fibonacci: ");
  scanf("%d", &n);
  fibonacci(n); // chama func fibonacci fornecendo a posição
}