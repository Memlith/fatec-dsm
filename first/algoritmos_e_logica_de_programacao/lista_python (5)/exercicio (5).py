def aluno():
    print("Caio Simonassi\n1051392421012\n1º Semestre DSM")
aluno()

QUANTNOME = 4
listaCidade = []
contador = 1
print("")

while contador < QUANTNOME:
    nome = input(f"Digite o Nome de uma Cidade {contador}: ")
    listaCidade.append(nome)
    print(listaCidade)
    contador += 1
