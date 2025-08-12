print("Caio Simonassi\n1051392421012\n")
print("Renzo Trigo Orfila\n1051392421006\n")
# Desenvolva um programa que só permita o acesso a pessoas autorizadas (professor, via autenticação) para posteriormente realizar a média do aluno.

medinalogin = "Medina"
medinasenha = "éounãoé"

tentativa = 3
while tentativa > 0:
    login = input("Login: ")
    senha = input("Senha: ")
    if login == medinalogin and senha == medinasenha:
        print("Acesso liberado")
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
        break
    else:
        print("Acesso negado")
        tentativa -= 1