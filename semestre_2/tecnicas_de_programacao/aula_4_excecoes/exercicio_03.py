"""Tarefa: Crie uma função que solicita ao usuário digitar um número inteiro.
Garanta o tratamento de erro para valores inválidos.
Objetivo: Validar entradas e capturar ValueError.
"""


def digita_numero_int():
    while True:
        try:
            numero_int = int(input("Digite um numero inteiro: "))
            return numero_int
        except ValueError:
            print("Entrada invalida! Digite um numero inteiro!")


numero = digita_numero_int()
print(f"Voce digitou: {numero}")
