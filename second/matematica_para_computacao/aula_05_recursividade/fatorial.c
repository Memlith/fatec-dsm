#include <stdio.h>

int fato(int n)
{
  if (n == 0)
    return 1;

  else
    return n * fato(n - 1);
}

int main()
{
  int n;
  printf("Digite o N para calcular o fatorial: ");
  scanf("%d", &n);
  //  printf(fato(n));
}

// scanf n
// fat = 1
// for i = 0 i <= n
//  fat = fat x i

// 0, se n=0
// 1, se n=1
// n, fib(n-1)+fib(n-2)
//
//
