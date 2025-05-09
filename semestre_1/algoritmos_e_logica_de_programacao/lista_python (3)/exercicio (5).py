print("Caio Simonassi\n1051392421012\n")
print("Renzo Trigo Orfila\n1051392421006\n")

aluno = input("Nome do aluno: ")
prova1 = float(input("Nota da P1: "))
prova2 = float(input("Nota da P2: "))
mg = (prova1*4+prova2*6)/10

if mg > 9:
    print(f"A situação do {aluno} está em: Aprovado, conceito A.")
elif mg > 7:
    print(f"A situação do {aluno} está em: Aprovado, conceito B.")
elif mg > 3:
    print(f"A situação do {aluno} está em: Exame, conceito C.")
elif mg > 0:
    print(f"A situação do {aluno} está em: DP, conceito D.")
