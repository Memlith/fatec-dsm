#include <stdio.h>
#include <locale.h>

float salario_atual, sal_bonus;
int tempo_servico;

main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Informe seu salário atual: ");
    scanf("%f", &salario_atual);

    printf("Informe o seu tempo de serviço na empresa em anos: ");
    scanf("%i", &tempo_servico);

    if(tempo_servico > 5){
        sal_bonus = salario_atual + 500;
        printf("O novo salário com o bônus é de: R$ %.2f", sal_bonus);
    }
    else{
        printf("Infelizmente seu salário permanece o mesmo, pois você ainda não tem direito ao bônus!");
    }
}
