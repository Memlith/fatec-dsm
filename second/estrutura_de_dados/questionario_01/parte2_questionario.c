#include <stdio.h>

int idade_em_dias(int anos, int meses, int dias)
{
  return anos * 365 + meses * 30 + dias;
}

float peso_ideal(float altura, char sexo)
{
  while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f')
  {
    printf("sexo invalido! Digite novamente\nsexo (M/F): ");
    scanf(" %c", &sexo);
  }
  if (sexo == 'M' || sexo == 'm')
    return 72.7 * altura - 58;
  else
    return 62.1 * altura - 44.7;
}

float calcular_media(float nota1, float nota2, char tipo)
{
  while (tipo != 'A' && tipo != 'a' && tipo != 'P' && tipo != 'p')
  {
    printf("tipo invalido! Digite novamente\ntipo (A/P): ");
    scanf(" %c", &tipo);
  }
  if (tipo == 'A' || tipo == 'a')
    return (nota1 + nota2) / 2;
  else
    return (nota1 * 3 + nota2 * 7) / 10;
}

void pesquisa_habitantes()
{
  float salario, soma_salario = 0, maior_salario = 0;
  int filhos, total_pessoas = 0, soma_filhos = 0, renda_baixa = 0;

  while (1)
  {
    printf("salario (0 p/ sair): ");
    scanf("%f", &salario);
    if (salario < 1)
      break;

    printf("qtd de filhos: ");
    scanf("%d", &filhos);

    soma_salario += salario;
    soma_filhos += filhos;
    total_pessoas++;

    if (salario > maior_salario)
      maior_salario = salario;

    if (salario <= 1412.00)
      renda_baixa++;
  }

  if (total_pessoas > 0)
  {
    printf("media dos salarios: %.2f\n", soma_salario / total_pessoas);
    printf("media da quantidade de filhos: %.2f\n", (float)soma_filhos / total_pessoas);
    printf("maior salario: %.2f\n", maior_salario);
    printf("porcentagem de salarios abaixo do salario minimo: %.2f%%\n", (float)renda_baixa / total_pessoas * 100);
  }
  else
  {
    printf("nenhum dado informado\n");
  }
}

int fatorial(int n)
{
  int fat = 1;
  for (int i = 1; i <= n; i++)
    fat *= i;
  return fat;
}

void inverter_vetor(int vetor[], int tamanho)
{
  int temp;
  for (int i = 0; i < tamanho / 2; i++)
  {
    temp = vetor[i];
    vetor[i] = vetor[tamanho - 1 - i];
    vetor[tamanho - 1 - i] = temp;
  }
}

int soma_digitos(int numero)
{
  int soma = 0;
  while (numero > 0)
  {
    soma += numero % 10;
    numero /= 10;
  }
  return soma;
}

int primo(int numero)
{
  if (numero < 2)
    return 0;
  for (int i = 2; i * i <= numero; i++)
  {
    if (numero % i == 0)
      return 0;
  }
  return 1;
}

void contar_pares_impares(int vetor[], int tamanho, int *pares, int *impares)
{
  *pares = 0;
  *impares = 0;
  for (int i = 0; i < tamanho; i++)
  {
    if (vetor[i] % 2 == 0)
      (*pares)++;
    else
      (*impares)++;
  }
}

int soma_matriz(int matriz[3][3])
{
  int soma = 0;
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      soma += matriz[i][j];
  return soma;
}

int main()
{
  int opcao;

  do
  {
    printf("\n============ menu ============\n");
    printf("[1]   - idade em dias\n");
    printf("[2]   - peso ideal\n");
    printf("[3]   - calcular media\n");
    printf("[4]   - pesquisa habitantes\n");
    printf("[5]   - fatorial\n");
    printf("[6]   - inverter vetor\n");
    printf("[7]   - soma dos digitos\n");
    printf("[8]   - verificar se numero eh primo\n");
    printf("[9]   - contar pares e impares\n");
    printf("[10]  - soma de matriz 3x3\n");
    printf("[0]   - sair\n");
    printf("=> ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    {
      int anos, meses, dias;
      printf("anos: ");
      scanf("%d", &anos);
      printf("meses: ");
      scanf("%d", &meses);
      printf("dias: ");
      scanf("%d", &dias);
      printf("resultado: %d dias\n", idade_em_dias(anos, meses, dias));
      break;
    }
    case 2:
    {
      float altura;
      char sexo;
      printf("altura: ");
      scanf("%f", &altura);
      printf("sexo (M/F): ");
      scanf(" %c", &sexo);
      printf("peso ideal: %.2f\n", peso_ideal(altura, sexo));
      break;
    }
    case 3:
    {
      float n1, n2;
      char tipo;
      printf("primeira nota: ");
      scanf("%f", &n1);
      printf("segunda nota: ");
      scanf("%f", &n2);
      printf("tipo (A/P): ");
      scanf(" %c", &tipo);
      printf("media: %.2f\n", calcular_media(n1, n2, tipo));
      break;
    }
    case 4:
      pesquisa_habitantes();
      break;
    case 5:
    {
      int n;
      printf("numero: ");
      scanf("%d", &n);
      printf("fatorial: %d\n", fatorial(n));
      break;
    }
    case 6:
    {
      int vetor[10];
      printf("digite 10 numeros para inverter a posição deles:\n");
      for (int i = 0; i < 10; i++)
        scanf("%d", &vetor[i]);

      inverter_vetor(vetor, 10);

      printf("invertido:\n");
      for (int i = 0; i < 10; i++)
        printf("%d ", vetor[i]);
      printf("\n");
      break;
    }
    case 7:
    {
      int num;
      printf("digite um numero grande: ");
      scanf("%d", &num);
      printf("soma dos digitos: %d\n", soma_digitos(num));
      break;
    }
    case 8:
    {
      int num;
      printf("numero para descobrir se é primo: ");
      scanf("%d", &num);
      if (primo(num))
        printf("é primo\n");
      else
        printf("nao é primo\n");
      break;
    }
    case 9:
    {
      int vetor[10], pares, impares;
      printf("digite 10 numeros impares e pares:\n");
      for (int i = 0; i < 10; i++)
        scanf("%d", &vetor[i]);

      contar_pares_impares(vetor, 10, &pares, &impares);
      printf("pares: %d\nimpares: %d\n", pares, impares);
      break;
    }
    case 10:
    {
      int matriz[3][3];
      printf("digite 9 valores da matriz 3x3:\n");
      for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
          scanf("%d", &matriz[i][j]);

      printf("soma total: %d\n", soma_matriz(matriz));
      break;
    }
    case 0:
      printf("encerrando...\n");
      break;
    default:
      printf("opcao invalida\n");
    }
  } while (opcao != 0);
  return 0;
}
