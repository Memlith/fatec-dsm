#include <stdio.h>

int idade_em_dias(int anos, int meses, int dias)
{
  return anos * 365 + meses * 30 + dias;
}

float peso_ideal(float altura, char sexo)
{
  if (sexo == 'M' || sexo == 'm')
    return 72.7 * altura - 58;
  else
    return 62.1 * altura - 44.7;
}

float calcular_media(float nota1, float nota2, char tipo)
{
  if (tipo == 'A' || tipo == 'a')
    return (nota1 + nota2) / 2;
  else
    return (nota1 * 3 + nota2 * 7) / 10;
}

void pesquisa_habitantes()
{
  float salario, soma_salario = 0, maior_salario = 0;
  int filhos, total_pessoas = 0, soma_filhos = 0, ate_1412 = 0;

  while (1)
  {
    printf("Salario (-1 para encerrar): ");
    scanf("%f", &salario);
    if (salario < 0)
      break;

    printf("Numero de filhos: ");
    scanf("%d", &filhos);

    soma_salario += salario;
    soma_filhos += filhos;
    total_pessoas++;

    if (salario > maior_salario)
      maior_salario = salario;

    if (salario <= 1412.00)
      ate_1412++;
  }

  printf("Media salarial: %.2f\n", soma_salario / total_pessoas);
  printf("Media de filhos: %.2f\n", (float)soma_filhos / total_pessoas);
  printf("Maior salario: %.2f\n", maior_salario);
  printf("Percentual com salario ate R$1412: %.2f%%\n", (float)ate_1412 / total_pessoas * 100);
}

int fatorial(int n)
{
  int fat = 1;
  for (int i = 1; i <= n; i++)
    fat *= i;
  return fat;
}

void inverter_vetor()
{
  int vetor[10], temp;
  printf("Informe 10 numeros:\n");
  for (int i = 0; i < 10; i++)
    scanf("%d", &vetor[i]);

  for (int i = 0; i < 5; i++)
  {
    temp = vetor[i];
    vetor[i] = vetor[9 - i];
    vetor[9 - i] = temp;
  }

  printf("Vetor invertido:\n");
  for (int i = 0; i < 10; i++)
    printf("%d ", vetor[i]);
  printf("\n");
}

int main()
{
  int opcao;
  do
  {
    printf("\nMenu de opcoes:\n");
    printf("[1]  - Idade em dias\n");
    printf("[2]  - Peso ideal\n");
    printf("[3]  - Calcular media\n");
    printf("[4]  - Pesquisa de habitantes\n");
    printf("[5]  - Fatorial\n");
    printf("[6]  - Inverter vetor\n");
    printf("[7]  - Em desenvolvimento\n");
    printf("[8]  - Em desenvolvimento\n");
    printf("[9]  - Em desenvolvimento\n");
    printf("[10] - Em desenvolvimento\n");
    printf("[0]  - Sair\n");
    printf("=> ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    {
      int anos, meses, dias;
      printf("Informe os anos: ");
      scanf("%d", &anos);
      printf("Informe os meses : ");
      scanf("%d", &meses);
      printf("Informe os dias: ");
      scanf("%d", &dias);
      printf("Total em dias: %d\n", idade_em_dias(anos, meses, dias));
      break;
    }
    case 2:
    {
      float altura;
      char sexo;
      printf("Altura : ");
      scanf("%f", &altura);
      printf("Sexo (M/F): ");
      scanf(" %c", &sexo);
      printf("Peso ideal: %.2f\n", peso_ideal(altura, sexo));
      break;
    }
    case 3:
    {
      float nota1, nota2;
      char tipo;
      printf("Nota 1: ");
      scanf("%f ", &nota1);
      printf("Nota 2: ");
      scanf("%f ", &nota2);
      printf("Tipo (A para aritmetica, P para ponderada): ");
      scanf(" %c", &tipo);
      printf("Media: %.2f\n", calcular_media(nota1, nota2, tipo));
      break;
    }
    case 4:
      pesquisa_habitantes();
      break;
    case 5:
    {
      int n;
      printf("Informe um numero: ");
      scanf("%d", &n);
      printf("Fatorial de %d = %d\n", n, fatorial(n));
      break;
    }
    case 6:
      inverter_vetor();
      break;
    case 0:
      printf("Finalizando programa.\n");
      break;
    default:
      printf("Opcao invalida.\n");
    }

  } while (opcao != 0);

  return 0;
}
