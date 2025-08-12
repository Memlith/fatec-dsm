print("Caio Simonassi\n1051392421012\n")
print("Renzo Trigo Orfila\n1051392421006\n")

salario = float(input("Digite seu salário aqui:"))


if salario <= 1500:
    salario = salario+((salario/100)*20)
elif salario < 2500:
    salario = salario+((salario/100)*10)
elif salario >= 2500:
    salario = salario+((salario/100)*5)

print(f"Seu salário com aumento agora é: R${salario:.2f}")
