#include <stdio.h>

int main()
{
  int idade, ano_nascimento, ano_contrato, ano_atual, anos_trabalhados;
  printf("Digite o ano do seu nascimento: ");
  scanf("%d", &ano_nascimento);
  printf("Digite o ano de ingresso na empresa: ");
  scanf("%d", &ano_contrato);

  ano_atual = 2025;
  idade = ano_atual - ano_nascimento;
  anos_trabalhados = ano_atual - ano_contrato;

  if ((idade >= 65 || anos_trabalhados >= 30) || (idade >= 60 && anos_trabalhados >= 25))
  {
    printf("Voce pode se aposentar!\nPois voce trabalhou por %d anos e tem %d anos de idade!\n", anos_trabalhados, idade);
  }
  else
  {
    printf("Voce nao pode se aposentar!\nPois voce trabalhou por %d anos e tem %d anos de idade!\n", anos_trabalhados, idade);
    printf("Restam %d anos para voce se aposentar!\n", 65 - idade);
  }
}