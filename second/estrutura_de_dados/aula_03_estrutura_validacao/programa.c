#include <stdio.h>
#include <locale.h>

char sexo, telefone;

main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Informe seu sexo[M ou F]: ");
    scanf("%c", &sexo);

    if(sexo == 'F'){
        printf("Obrigado pelo contato!");
    }
    else{
        printf("Qual � seu telefone de contato? ");
        scanf("%s", &telefone);
        printf("Informa��es enviadas para o RH!");
    }
}
