#include <stdio.h>

int main()
{
  int total, brancos, nulos, validos;
  float percentualBrancos, percentualNulos, percentualValidos;

  // input dos votos
  printf("Digite o total de eleitores: ");
  scanf("%d", &total);

  printf("Digite o total de votos brancos: ");
  scanf("%d", &brancos);

  printf("Digite o total de votos nulos: ");
  scanf("%d", &nulos);
  printf("Digite o total de votos validos: ");
  scanf("%d", &validos);

  // calculo dos percentuais
  percentualBrancos = (float)brancos / total * 100;
  percentualNulos = (float)nulos / total * 100;
  percentualValidos = (float)validos / total * 100;

  // saida dos resultados
  printf("A porcentagem de votos brancos: %.2f%%\n", percentualBrancos);
  printf("A porcetagem de votos nulos: %.2f%%\n", percentualNulos);
  printf("A porcentagem de votos validos: %.2f%%\n", percentualValidos);
}