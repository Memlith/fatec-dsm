"""
Exercício 13 - Contador de tentativas

Modifique o programa anterior para contar quantas tentativas o usuário precisou até acertar.
"""

import random

sorteio = random.randint(1, 10)
tentativas = 7
tentativas_usadas = 0
while True:
    print(f"Tentativas restantes: {tentativas}")
    chute = int(input("Digite um número: "))
    if chute == sorteio and tentativas > 0:
        tentativas_usadas += 1
        print("Parabéns, você acertou!")
        print(f"Quantidade precisou de  >{tentativas_usadas}< tentativas")
        break
    elif chute != sorteio and tentativas > 0:
        print("Tente novamente.")
        tentativas -= 1
        tentativas_usadas += 1
    else:
        print("Suas tentativas acabaram.")
        break
print(f"O número correto era {sorteio}")
