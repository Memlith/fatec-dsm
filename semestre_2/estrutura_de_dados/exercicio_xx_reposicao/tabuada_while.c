#include <stdio.h>

int main()
{
  int numero, i;
  printf("digite um numero para saber a tabuada: ");
  scanf("%d", &numero);
  printf("tabuada do %d:\n", numero);

  i = 1;
  while (i <= 10)
  {
    printf("%d x %d = %d\n", numero, i, numero * i);
    i++;
  }
  return 0;
}