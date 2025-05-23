#include <stdio.h>
#include <math.h>

int main()
{
  float altura, largura, area, preco, litros;
  int latas;

  printf("Digite a altura da parede: ");
  scanf("%f", &altura);

  printf("Digite a largura da parede: ");
  scanf("%f", &largura);

  area = altura * largura;
  printf("A area da parede eh: %.2f\n", area);

  litros = area / 2;
  printf("A quantidade de tinta necessaria eh: %.2f\n", litros);

  latas = ceil(litros / 5);
  printf("A quantidade de latas necessaria eh: %d\n", latas);

  preco = latas * 50;
  printf("O preco total eh: %.2f\n", preco);

  return 0;
}