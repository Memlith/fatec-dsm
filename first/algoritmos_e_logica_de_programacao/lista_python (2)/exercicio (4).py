print("Caio Simonassi\n1051392421012\n")
print("Renzo Trigo Orfila\n1051392421006\n")

altura = float(input("Altura da pessoa: "))
genero = str(input("Qual seu gênero: "))
peso = 0

if genero == "masculino":
    peso = (72.7*altura) - 58
    print(f"Seu peso ideal a= {peso}")
elif genero == "feminino":
    peso = (62.1*altura) - 44.7
    print(f"Seu peso ideal é a= {peso}")
else:
    print("Gênero inválido.")
