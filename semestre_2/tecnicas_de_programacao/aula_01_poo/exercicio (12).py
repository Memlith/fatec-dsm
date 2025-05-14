"""
Exercício 12 - Adivinhação

O programa escolhe um número aleatório entre 1 e 10, e o usuário tem que adivinhar. Ele só para quando o número correto for digitado.
"""

import random

sorteio = random.randint(1, 10)
tentativas = 7
while True:
    chute = int(input("Digite um número: "))
    if chute == sorteio and tentativas > 0:
        print("Parabéns, você acertou!")
        break
    elif chute != sorteio and tentativas > 0:
        print("Tente novamente.")
        tentativas -= 1
    else:
        print("Suas tentativas acabaram.")
        break
print(f"O número correto era {sorteio}")
