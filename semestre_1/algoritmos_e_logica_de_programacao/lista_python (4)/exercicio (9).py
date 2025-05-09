print("Caio Simonassi\n1051392421012\n")
#O usuário deve digitar seu nome e sua idade. O sistema deverá informar as seguintes mensagens:
# Bem vindo NOME você é maior de idade.
# Bem vindo NOME você é menor de idade.
# Bem vindo NOME você é maior de 65 anos.

nome = input("Digite o seu nome: ")
idade = int(input("Digite um valor da sua idade: "))

if idade < 18:
    print(f"Bem vindo {nome}, você é menor de idade.")
elif idade >= 18:
    print(f"Bem vindo {nome}, você é maior de idade.")
elif idade >= 65:
    print(f"Bem vindo {nome}, você é maior de 65 anos.")
