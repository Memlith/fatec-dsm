def aluno():
    print("Caio Simonassi\n1051392421012\n1º Semestre DSM")
aluno()

peso = float(input("\nDigite seu peso: "))
sexo = input("\n[F] Feminino \n[M] Masculino\nSelecione seu sexo: ")
altura = float(input("\nDigite sua altura: "))

def IMC(peso, altura):
    resultado = peso/altura**2
    return resultado

def femininoCalc(resultado):
    if resultado < 19:
        print("\nPelos cálculos, seu peso está abaixo do ideal.")
        print(f"seu IMC é {resultado:.2f}")
    elif resultado < 24:
        print("\nPelos cálculos, seu peso está o ideal.")
        print(f"seu IMC é {resultado:.2f}")
    elif resultado >= 24:
        print("\nPelos cálculos, seu peso está acima do ideal.")
        print(f"seu IMC é {resultado:.2f}")

def masculinoCalc(resultado):
    if resultado < 20:
        print("\nPelos cálculos, seu peso está abaixo do ideal.")
        print(f"seu IMC é {resultado:.2f}")
    elif resultado < 25:
        print("\nPelos cálculos, seu peso está o ideal.")
        print(f"seu IMC é {resultado:.2f}")
    elif resultado >= 25:
        print("\nPelos cálculos, seu peso está acima do ideal.")
        print(f"seu IMC é {resultado:.2f}")
        
imc = IMC(peso, altura)

if sexo == "F":
    femininoCalc(imc)
elif sexo == "M":
    masculinoCalc(imc)
else:
    print("Gênero inválido")