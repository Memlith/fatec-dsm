#include <stdio.h>

int main()
{
  int l1, l2, l3;
  printf("Informe o lado 1:");
  scanf("%d", &l1);
  printf("Informe o lado 2:");
  scanf("%d", &l3);
  printf("Informe o lado 3:");
  scanf("%d", &l2);
  if ((l1 > l2 + l3) || (l2 > l1 + l3) || (l3 > l2 + l1))
  {
    printf("Os lados informados não formam um triangulo!\n");
  }
  else
  {
    if ((l1 == l2) && (l1 == l3))
    {
      printf("Triangulo equilatero!\n");
    }
    else
    {
      if ((l1 != l2) && (l1 != l3) && (l2 != l3))
      {
        printf("Triangulo escaleno!\n");
      }
      else
      {
        printf("Triangulo isoceles!\n");
      }
    }
  }
}