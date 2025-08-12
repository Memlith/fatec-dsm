"""
Fix71: Resolva o seguinte problema em python. 
Considere a seguinte lista de compras de produtos de supermercado. 
Depois identifique qual é o produto mais barato, o produto mais caro, a media e o valor total da compra..
Para isto considere a seguinte lista de produtos:
produtos = [20.50, 8.90, 5.40, 7.80, 15.00, 4.30, 6.50, 12.00, 13.50, 9.80]
"""
def Aluno():
    ALUNO = "Caio Simonassi"
    RA = "1051392421012"
    print(f"\n{ALUNO}\n{RA}\n")
Aluno()

produtos = [20.50, 8.90, 5.40, 7.80, 15.00, 4.30, 6.50, 12.00, 13.50, 9.80]

produtoMaisBarato = min(produtos)
print(f"Produto mais barato: {produtoMaisBarato:.2f}")

produtoMaisCaro = max(produtos)
print(f"Produto mais caro: {produtoMaisCaro:.2f}")

produtosMedia = sum(produtos) / len(produtos)
print(f"Media de preço dos produtos: {produtosMedia:.2f}")