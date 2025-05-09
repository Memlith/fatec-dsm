print("Caio Simonassi\n1051392421012\n")

cotacaoDolar = float(input("Digite a cotação atual do Dolar:"))
dolares = float(input("Digite a quantidade de dolares :"))
reais = float(dolares*cotacaoDolar)
print(f"${dolares:.2f} Dolares = R${reais:.2f} Reais")