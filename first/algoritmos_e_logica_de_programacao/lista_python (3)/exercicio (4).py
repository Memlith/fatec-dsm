print("Caio Simonassi\n1051392421012\n")
print("Renzo Trigo Orfila\n1051392421006\n")

peso = float(input("Digite seu peso: "))
sexo = input("Digite seu sexo: ")
altura = float(input("Digite sua altura: "))
resultado = peso/altura**2

if sexo == "feminino":
    if resultado < 19:
        print("Pelos cálculos, seu peso está abaixo do ideal.")
    elif resultado < 24:
        print("Pelos cálculos, seu peso está no ideal.")
    elif resultado >= 24:
        print("Pelos cálculos, seu peso está acima do ideal.")
elif sexo == "masculino":
    if resultado < 20:
        print("Pelos cálculos, seu peso está abaixo do ideal.")
    elif resultado < 25:
        print("Pelos cálculos, seu peso está no ideal.")
    elif resultado >= 25:
        print("Pelos cálculos, seu peso está acima do ideal.")
else:
    print("Gênero inválido")
