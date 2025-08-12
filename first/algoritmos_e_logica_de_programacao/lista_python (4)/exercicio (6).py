print("Caio Simonassi\n1051392421012\n")
# Desenvolva um programa em Python que receba via teclado um valor e a partir disso faça:
#  (1) se for um valor negativo, mostre o módulo (valor sem sinal) do valor;
#  (2) se for um valor maior do que 10, solicite outro valor e mostre a diferença entre eles;
#  (3) Caso o valor não seja de nenhuma condição anterior, mostre o valor dividido por 5;

valor = int(input("Digite um valor inteiro: "))

if valor < 0:
    valor *= -1
    print(f"O modulo do valor digitado é {valor}")
elif valor > 10:
    outroValor = int(input("Digite OUTRO Valor: "))
    diff = valor - outroValor
    if diff < 0:
        diff *= -1
        print(f"A diferença desses dois valores é {diff}")
    else:
        print(f"A diferença desses dois valores é {diff}")
else:
    valor /= 5
    print(f"O valor digitado divido por 5 é {valor}")
    