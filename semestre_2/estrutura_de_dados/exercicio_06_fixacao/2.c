#include <stdio.h>
#include <locale.h>

void mensagem()
{
    printf("Digite um número: ");
}

void soma(int n1, int n2)
{
    int total = n1 + n2;
    printf("Soma = %d\n", total);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b;

    mensagem();
    scanf("%d", &a);

    mensagem();
    scanf("%d", &b);

    soma(a, b);

    return 0;
}
