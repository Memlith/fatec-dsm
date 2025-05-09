print("Caio Simonassi\n1051392421012\n")
# Altere o algoritmo anterior (Fix32) para que o usuário entre com a nota do exame. Lembre-se que deve se realizar a média aritmética entre a média e a nota do exame. O sistema deverá informar a ele as seguintes mensagens:
# a) Se a média for maior ou igual a cinco: Parabéns, você aproveitou a sua chance! Está aprovado.
# b) Se a média for menor que cinco: Estude mais para a próxima. Você não alcançou o mínimo necessário.

aluno = input("Nome do aluno: ")
ra = input("RA do aluno: ")

nota1 = float(input("Digite a Nota 1: "))
nota2 = float(input("Digite a Nota 2: "))
notaExame = float(input("Digite a Nota do Exame: "))

calculoNota = (nota1*4+nota2*3+notaExame*3)/10

if calculoNota >= 5:
    print("Parabéns, você aproveitou a sua chance! Está aprovado.")
elif calculoNota < 5:
    print("Estude mais para a próxima. Você não alcançou o mínimo necessário.")

