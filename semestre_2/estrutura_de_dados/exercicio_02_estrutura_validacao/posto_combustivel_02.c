#include <stdio.h>

int main()
{
  char combustivel;
  float litros, valor_sem_desconto, valor_final;
  printf("[Alcool: R$3,49 | Gasolina: R$5,49]\n[A = Alcool / G = Gasolina]\nSelecione o tipo de combustivel: ");
  scanf("%c", &combustivel);

  printf("\n");

  if ((combustivel != 'a' && combustivel != 'A') && (combustivel != 'g' && combustivel != 'G'))
  {
    printf("Tipo de combustivel invalido!");
  }
  else
  {
    printf("Digite quantos litros deseja abastecer: ");
    scanf("%f", &litros);
    if ((combustivel == 'g' || combustivel == 'G') && litros > 20)
    {
      valor_sem_desconto = litros * 3.49;
      valor_final = litros * (3.49 - ((3.49 / 100) * 6));
      printf("Seu carro foi abastecido com %.2fL, e ficou no valor de R$%.2f\n", litros, valor_final);
      printf("Com desconto de 6%% R$%.2f\n", valor_sem_desconto - valor_final);
    }
    else
    {
      if ((combustivel == 'g' || combustivel == 'G') && litros <= 20)
      {
        valor_sem_desconto = litros * 3.49;
        valor_final = litros * (3.49 - ((3.49 / 100) * 4));
        printf("Seu carro foi abastecido com %.2fL, e ficou no valor de R$%.2f\n", litros, valor_final);
        printf("Com desconto de 4%% R$%.2f\n", valor_sem_desconto - valor_final);
      }
      else
      {
        if ((combustivel == 'a' || combustivel == 'A') && litros <= 20)
        {
          valor_sem_desconto = litros * 3.49;
          valor_final = litros * (3.49 - ((3.49 / 100) * 3));
          printf("Seu carro foi abastecido com %.2fL, e ficou no valor de R$%.2f\n", litros, valor_final);
          printf("Com desconto de 3%% R$%.2f\n", valor_sem_desconto - valor_final);
        }
        else
        {
          if ((combustivel == 'a' || combustivel == 'A') && litros > 20)
          {
            valor_sem_desconto = litros * 3.49;
            valor_final = litros * (3.49 - ((3.49 / 100) * 5));
            printf("Seu carro foi abastecido com %.2fL, e ficou no valor de R$%.2f\n", litros, valor_final);
            printf("Com desconto de 5%% R$%.2f\n", valor_sem_desconto - valor_final);
          }
        }
      }
    }
  }
  printf("\n");
}