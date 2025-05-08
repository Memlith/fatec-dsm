//Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Criar um programa que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e exiba o salário final do vendedor.
main()
{
  //entrada
  float salario_fixo, comissao_fixa, valor_carro, valor_total_carros, salario_final, valor_com_comissao, valor_5_porcento;
  int quant_carros, cod_vendedor;
  printf("Digite o codigo do vendedor: ");
  scanf("%i", &cod_vendedor);
  printf("Digite quantos carros o funcionario vendeu: ");
  scanf("%i", &quant_carros);

  //processamento
  salario_fixo = 2000;
  comissao_fixa = 2;
  valor_carro = 10000;
  valor_total_carros = quant_carros * valor_carro;
  valor_5_porcento = ((valor_total_carros / 100) * 5 );
  valor_com_comissao = ((valor_carro / 100) * comissao_fixa) * quant_carros;
  salario_final = salario_fixo + valor_5_porcento + valor_com_comissao;

  //saida
  printf("O salario final do vendedor * %i * e de: R$%.2f\n", cod_vendedor, salario_final);
  printf("Ele vendeu * %i * Carros no valor total de: R$%.2f\n", quant_carros, valor_total_carros);
  printf("Sua comissao de * 2%% * por carro vendido no total de: R$%.2f\n", valor_com_comissao);
  printf("E seus * 5%% * por carro vendido no total de: R$%.2f\n", valor_5_porcento);
  return 0;
}
