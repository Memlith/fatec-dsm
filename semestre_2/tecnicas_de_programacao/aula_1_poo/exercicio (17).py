"""
Exercício 17 - Verificar Número Par ou Ímpar

Crie uma função eh_par(numero) que recebe um número e retorna True se for par e False se for ímpar.
"""


def eh_par(numero):
    if numero % 2 == 0:
        return True
    else:
        return False


numero = int(input("Digite um número: "))

if eh_par(numero):
    print(f"{numero} é par.")
else:
    print(f"{numero} é impar.")
