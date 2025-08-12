print("Caio Simonassi\n1051392421012\n")
# Desenvolva um programa em Python que receba via teclado um valor e a partir disso faça:
# (1) se o valor for 1 e 2, mostre o valor elevado ao cubo; 
# (2) se o valor for múltiplo de 3 mostre o fatorial desse número; 
# (3) se o valor for os valores 4, 5, 7 ou 8, mostre o valor dividido 9. Caso não seja nenhum dos valores, informe como “valor inválido”.

valor = int(input("Insira um valor: "))
mult3 = valor % 3

if valor in [1,2]:
    valor = valor ** 3
    print(f"O valor digitado elevado ao cubo é {valor}")
elif mult3 == 0:
    resultado = 1
    for contador in range(1, valor+1):
        resultado *= contador
    print(f"O fatorial do valor é {resultado}")

elif valor in [4,5,7,8]:
    valor = valor / 9
    print(f"O valor digitado dividido por 9 é {valor:.2f}")
else:
    print("valor invalido")


