def aluno():
    print("Caio Simonassi\n1051392421012\n1º Semestre DSM")
aluno()

def menu():
    while True:
        print("\n[1] Calcular area de um Quadrado.\n[2] Calcular area de um Retângulo.\n[3] Calcular area de um Triangulo.\n[4] Sair.")
        opcao = int(input("\nSelecione uma Opção: "))

        if opcao == 1:
            baseQuad = float(input("\nDigite o valor da base do Quadrado: "))
            quadrado(baseQuad)

        elif opcao == 2:
            baseReta = float(input("\nDigite o valor da base do Retângulo: "))
            altReta = float(input("Digite o valor da altura do Retângulo: "))
            retangulo(baseReta, altReta)

        elif opcao == 3:
            baseTri = float(input("\nDigite o valor da base do Triangulo: "))
            altTri = float(input("Digite o valor da altura do Triangulo: "))
            triangulo(baseTri, altTri)

        else:
            break


def retangulo(baseReta, altReta):
    area = baseReta * altReta
    print(f"A area do Retângulo é {area}")


def triangulo(baseTri, altTri):
    area = (baseTri * altTri) / 2
    print(f"A area do Triangulo é {area}")


def quadrado(baseQuad):
    area = baseQuad ** 2
    print(f"A area do Quadrado é {area}")

menu()
