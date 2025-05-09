print("Caio Simonassi\n1051392421012\n")
# Elabore um programa em Python que o usuário entre com seu e seu salário. Se o salário for menor ou igual a R$1500,00 coloque um acréscimo de 20% de aumento. 
# Se for maior que R$1500,00 e menor que R$2500,00 o acréscimo será de 10%, senão o acréscimo será de 5% para os demais valores.

salario = float(input("Digite  o seu salario: "))

if salario <= 1500.00:
    salario = salario + ((salario/100)*20)
    print(f"Seu salario com acrescimo de 20% ficou: R${salario}")
elif salario > 1500.00:
    salario = salario + ((salario/100)*10)
    print(f"Seu salario com acrescimo de 10% ficou: R${salario}")
elif salario >= 2500.00:
    salario = salario + ((salario/100)*5)
    print(f"Seu salario com acrescimo de 5% ficou: R${salario}")
