#include <stdio.h>

int main()
{
  float valorCarro, bonusVendas, salarioFixo, salarioTotal, totalVendas, comissao;
  int carrosVendidos;

  printf("Digite o numero de carros vendidos: ");
  scanf("%d", &carrosVendidos);

  printf("Digite o valor do carro: ");
  scanf("%f", &valorCarro);

  salarioFixo = 2000.00;
  comissao = carrosVendidos * (0.02 * valorCarro);

  totalVendas = carrosVendidos * valorCarro;
  bonusVendas = (totalVendas * 0.05);
  salarioTotal = salarioFixo + bonusVendas + comissao;

  printf("\nsalario total do vendedor: %.2f\n", salarioTotal);
  printf("numero de carros vendidos: %d\n", carrosVendidos);
  printf("valor comissao do vendedor: %.2f\n", comissao);
  printf("total de vendas do vendedor: %.2f\n", totalVendas);
  printf("bonus de vendas do vendedor: %.2f\n", bonusVendas);
}