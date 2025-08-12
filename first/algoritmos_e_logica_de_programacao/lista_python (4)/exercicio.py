print("Caio Simonassi\n1051392421012\n")
# Desenvolva um programa em Python que receba via teclado um valor e a partir disso faça:
# (1) se o valor for 1, 2 ou 3, mostre o valor elevado ao quadrado;
# (2) se o valor for o número 4 ou 9, mostre a raiz quadrada do número; 
# (3) se for os valores 6, 7 e 8, mostre o valor dividido 9.

valor = int(input("Insira um valor: "))

if valor in [1,2,3]:
    valor = valor ** 2
    print(f"O valor digitado elevado ao quadrado é {valor}")
elif valor in [4,9]:
    valor = valor ** .5
    print(f"A raiz quadrada do valor digitado é {valor}")
elif valor in [6,7,8]:
    valor = valor / 9
    print(f"O valor digitado dividido por 9 é {valor:.2f}")
else:
    print("valor invalido")


