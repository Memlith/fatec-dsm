print("Caio Simonassi\n1051392421012\n")
# Nesse programa o usuário deve entrar com um número e o sistema retornar se ele é divisível por 10 ou se é divisível por 5 ou se é divisível por 2, caso contrário retornar que o valor não é divisível por nenhum desses valores.

num = int(input("Insira um valor: "))

mult2 = num % 2
mult5 = num % 5
mult10= num % 10

if mult10 == 0:
    print("O numero digitado é divisivel por 10!")
elif  mult5 == 0:
    print("O numero digitado é divisivel por 5!")
elif  mult2 == 0:
    print("O numero digitado é divisivel por 2!")
else:
    print("O numero nao é divisivel por 10 nem por 5 nem 2.")
