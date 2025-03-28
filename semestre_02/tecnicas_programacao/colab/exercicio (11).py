"""
Exercício 11 - Números Primos

Desafio: Peça ao usuário para digitar um número e informe se ele é primo.
"""


def eh_primo(numero):
    if numero < 2:
        return False
    for i in range(2, int(numero**0.5) + 1):
        if numero % i == 0:
            return False
    return True


numero = int(input("Digite um número: "))

if eh_primo(numero):
    print(f"{numero} é primo.")
else:
    print(f"{numero} não é primo.")
