print("Caio Simonassi\n1051392421012\n")
print("Renzo Trigo Orfila\n1051392421006\n")
# Elaborar um algoritmo (programa) que leia as notas de 5 alunos e retorne a maior nota da turma.Utilize a estrutura de controle while.

contador = 0

maiornota = 0
while contador < 5:
    nota = float(input(f"Digite a nota do aluno {contador+1}: "))

    if nota > maiornota:
        maiornota = nota

    contador += 1
print(f"A maior nota da sala é {maiornota}")
