//Criar um programa para ler o salário mensal atual de um funcionário e o percentual de reajuste (aumento, por exemplo 10 para 10%), calcular e exibir o valor do novo salário atualizado.
main()
{
  //entrada
  float salario_atual, salario_novo,percentual_reajuste, aumento;
  printf("Digite o salario atual: R$");
  scanf("%f", &salario_atual);
  printf("Digite a porcentagem do reajuste: ");
  scanf("%f", &percentual_reajuste);
  //processamento
  salario_novo = ((salario_atual / 100) * percentual_reajuste) + salario_atual;
  aumento = salario_novo - salario_atual;
  //saida
  printf("Salario Atual: R$%.2f\n", salario_atual);
  printf("Percentual de reajuste: %.0f\n",percentual_reajuste);
  printf("Salario atualizado: R$%.2f\n", salario_novo);
  printf("Aumento: R$%.2f\n", aumento);
  return 0;
}