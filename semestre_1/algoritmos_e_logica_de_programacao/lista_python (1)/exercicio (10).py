print("Caio Simonassi\n1051392421012\n")

prod1 = float(input("Digite o valor do produto:"))
prod2 = float(input("Digite o valor do produto:"))
prod3 = float(input("Digite o valor do produto:"))
prod4 = float(input("Digite o valor do produto:"))
prod5 = float(input("Digite o valor do produto:"))
carrinho = prod1+prod2+prod3+prod4+prod5
print(f"O Valor total do carrinho deu: R${carrinho:.2f}")
pagamento = float(input("Digite o valor do pagamento:"))
troco = pagamento-carrinho
print(f"O Troco é de R${troco:.2f}")