#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
  setlocale(LC_ALL, "Portuguese");
  int op, num1, num2;
  float resultado, num3;
  do
  {
    printf("\n ===========================");
    printf("\n 1. Soma");
    printf("\n 2. Cubo ");
    printf("\n 3. Area do Retangulo");
    printf("\n 4. Par ou Impar");
    printf("\n 5. Subtração ");
    printf("\n 6. Quadrado ");
    printf("\n 7. Multiplicação");
    printf("\n\n 0. Sair");
    printf("\n ===========================");
    printf("\n Informe a opção desejada: ");
    scanf("%d", &op);
    switch (op)
    {
    case 0:
    {
      printf("\n ===== SAIR =====");
      break;
    }
    case 1:
    {
      printf("\n ===== Soma dos Números =====");
      printf("\n Informe o primeiro número (inteiro): ");
      scanf("%d", &num1);
      printf("\n Informe o segundo número (inteiro): ");
      scanf("%d", &num2);
      resultado = num1 + num2;
      printf("\n A soma dos números informados é: %.2f\n", resultado);
      getchar();
      break;
    }
    case 2:
    {
      printf("\n ===== Valor ao Cubo =====");
      printf("\n Informe um número inteiro: ");
      scanf("%d", &num1);
      resultado = num1 * num1 * num1;
      printf("\n O valor ao cubo do número informado é: %.2f\n");
      getchar();
      break;
    }
    case 3:
    {
      printf("\n ===== Area do Retângulo =====");
      printf("\n Informe a base do retângulo: ");
      scanf("%d", &num1);
      printf("\n Informe a altura do retângulo: ");
      scanf("%d", &num2);
      resultado = num1 * num2;
      printf("\n A area do retângulo é: %.2f\n", resultado);
      getchar();
      break;
    }
    case 4:
    {
      printf("\n ===== Par ou Ímpar =====");
      printf("\n Informe um número inteiro: ");
      scanf("%d", &num1);
      if (num1 % 2 == 0)
      {
        printf("\n%d é um número par\n");
      }
      else
      {
        printf("\n%d é um número ímpar\n");
      }
      getchar();
      break;
    }
    case 5:
    {
      printf("\n ===== Subtração dos Números =====");
      printf("\n Informe o primeiro número (inteiro): ");
      scanf("%d", &num1);
      printf("\n Informe o segundo número (inteiro): ");
      scanf("%d", &num2);
      resultado = num1 - num2;
      printf("\n A subtração dos números informados é: %.2f\n", resultado);
      getchar();
      break;
    }
    case 6:
    {
      printf("\n ===== Valor ao Quadrado =====");
      printf("\n Informe um número inteiro: ");
      scanf("%d", &num1);
      resultado = num1 * num1;
      printf("\n O valor ao cubo do número informado é: %.2f\n", resultado);
      getchar();
      break;
    }
    case 7:
    {
      printf("\n ===== Multiplicação dos Números =====");
      printf("\n Informe o primeiro número (inteiro): ");
      scanf("%d", &num1);
      printf("\n Informe o segundo número (inteiro): ");
      scanf("%d", &num2);
      resultado = num1 * num2;
      printf("\n A multiplicação dos números informados é: %.2f\n", resultado);
      getchar();
      break;
    }
    default:
    {
      printf("\n Digite uma opção válida\n");
      break;
    }
    }
  } while (op != 0);
}