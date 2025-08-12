print("Caio Simonassi\n1051392421012\n")
# Elabore um programa em PYTHON, que mostre os descontos concedidos pela loja ABC em suas mercadorias. 
# Em compras acima de R$ 300,00 forneça 20% de desconto, entre R$ 200,00 a R$ 299,99 desconto de 10% e abaixo de R$ 199,99 o desconto será de 5%. Mostre na tela o valor total e o valor final a pagar (com o desconto). 
# Solicite ao usuário que digite os valores via teclado.

valorCompra = float(input("O Valor da Compra é de: R$"))

if valorCompra >= 300.00:
    valorCompra = valorCompra-((valorCompra /100)*20)
    print(f"O desconto para a sua compra acima de R$300,00 é de 20%, com valor total de: R${valorCompra}!")
elif valorCompra >= 200.00:
    valorCompra = valorCompra-((valorCompra /100)*10)
    print(f"O desconto para a sua compra acima de R$200,00 é de 10%, com valor total de: R${valorCompra}!")
else:
    valorCompra = valorCompra-((valorCompra /100)*5)
    print(f"O desconto para a sua compra acima de R$200,00 é de 5%, com valor total de: R${valorCompra}!")
