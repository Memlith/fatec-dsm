"""
Fix77: Resolva o seguinte problema em python. 
Considere o dicionário a seguir, que contem 10 items de valores de compra de produtos de supermercado. 
Identifique qual é o produto mais barato, o produto mais caro, a media e o valor total da compra. 
Depois mostre os produtos e com seus respectivos valores em ordem alfabética

produtos = {
'Arroz': 20.50,
'Feijão': 8.90,
'Macarrão': 5.40,
'Óleo': 7.80,
'Café': 15.00,
'Açúcar': 4.30,
'Leite': 6.50,
'Pão': 12.00,
'Manteiga': 13.50,
'Farinha': 9.80
}
"""
def Aluno():
    ALUNO = "Caio Simonassi"
    RA = "1051392421012"
    print(f"\n{ALUNO}\n{RA}\n")
Aluno()

produtos = {
    'Arroz': 20.50,
    'Feijão': 8.90,
    'Macarrão': 5.40,
    'Óleo': 7.80,
    'Café': 15.00,
    'Açúcar': 4.30,
    'Leite': 6.50,
    'Pão': 12.00,
    'Manteiga': 13.50,
    'Farinha': 9.80
}

produtoMaisBarato = min(produtos, key=produtos.get)
precoMaisBarato = produtos[produtoMaisBarato]
print(f"o produto mais barato é: {produtoMaisBarato}\nCom o Preço de: {precoMaisBarato:.2f}")

produtoMaisCara = max(produtos, key=produtos.get)
precoMaisCaro = produtos[produtoMaisCara]
print(f"\no produto mais caro é: {produtoMaisCara}\nCom o Preço de: {precoMaisCaro:.2f}")

mediaPreco = sum(produtos.values()) / len(produtos)
print(f"\nA Média dos preços dos produtos é de: {mediaPreco:.2f}")

ordemAlfabetica = (sorted(produtos.items()))
print(f"\nItens do dicionário em ordem alfabética:\n{ordemAlfabetica}")