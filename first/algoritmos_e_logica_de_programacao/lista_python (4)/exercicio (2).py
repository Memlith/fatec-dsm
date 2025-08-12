print("Caio Simonassi\n1051392421012\n")
# Faça um algoritmo que calcule a média do aluno. Ele deve entrar com seu nome, ra, nota 1 e nota 2. O sistema deverá informar a ele as seguintes mensagens:
# a) Se a média for maior ou igual a sete: Parabéns, você está aprovado!
# b) Se a média for menor que sete: Você ainda tem uma chance! Estude mais para o exame.

aluno = input("Nome do aluno: ")
ra = input("RA do aluno: ")

nota1 = float(input("Digite a Nota 1: "))
nota2 = float(input("Digite a Nota 2: "))

calculoNota = (nota1*4+nota2*6)/10

if calculoNota >= 7:
    print("Parabéns, você está aprovado!")
elif calculoNota < 7:
    print("Você ainda tem uma chance! Estude mais para o exame.")

