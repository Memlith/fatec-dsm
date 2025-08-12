def aluno():
    print("Caio Simonassi\n1051392421012\n1º Semestre DSM")
aluno()

quantNome = int(input("\nDigite quantos nomes voce deseja digitar: "))
listaNome = []
contador = 0
print("")

while contador < quantNome:
    nome = input("Digite um nome: ")
    listaNome.append(nome)
    contador += 1

listaNome.sort()

print(f"\nAqui estão os nomes em ordem alfabetica: {listaNome}")
