#include <stdio.h>
#include <locale.h>

float salario_atual, sal_bonus;
int tempo_servico;

main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Informe seu sal�rio atual: ");
    scanf("%f", &salario_atual);

    printf("Informe o seu tempo de servi�o na empresa em anos: ");
    scanf("%i", &tempo_servico);

    if(tempo_servico > 5){
        sal_bonus = salario_atual + 500;
        printf("O novo sal�rio com o b�nus � de: R$ %.2f", sal_bonus);
    }
    else{
        printf("Infelizmente seu sal�rio permanece o mesmo, pois voc� ainda n�o tem direito ao b�nus!");
    }
}
