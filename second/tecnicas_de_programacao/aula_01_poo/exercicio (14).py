"""
Exercício 14 - Validando Entrada do Usuário

Peça para o usuário digitar um número positivo.
Se ele digitar um valor negativo, peça novamente até ele digitar corretamente.
"""

num = int(input("Digite um número: "))
while num < 0:
    if num < 0:
        print("Digite um número positivo.")
        num = int(input("Digite um número: "))
