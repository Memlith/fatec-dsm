print("Caio Simonassi\n1051392421012\n")
print("Renzo Trigo Orfila\n1051392421006\n")

num = int(input("Digite um número inteiro:"))

resultado = 1
for contador in range(1, num+1):
    resultado *= contador

print(f"O fatorial do número inteiro digitado é igual a = {resultado}")
