"""
Exercício 1. Parcelamento de um produto

Uma loja oferece parcelamento de um produto, mas cobra 10% de juros ao parcelar. Peça ao usuário o preço do produto e o número de parcelas e calcule o valor total e o valor de cada parcela.
"""

preco_produto = float(input("Insira o preço do produto: "))
num_parcelas = int(input("Insira o número de parcelas: "))

juros = preco_produto * 0.10
valor_total = preco_produto + juros
valor_parcela = valor_total / num_parcelas

print(f"O valor total do produto é R${valor_total:.2f}")
print(f"O valor de cada parcela é R${valor_parcela:.2f}")
