"""
Exercício 6. Simulação de descontos em uma compra

Crie um programa que simule um desconto progressivo em uma compra. O cliente recebe:

10% de desconto se o valor da compra for até R$ 500.

15% de desconto se o valor da compra for entre R$ 501 e R$ 1000.

20% de desconto se o valor da compra for acima de R$ 1000.

O programa deve pedir o valor total da compra e aplicar o desconto correspondente.
"""


def calc_desconto(valor_compra):
    if valor_compra <= 500:
        desconto = 0.10
    elif valor_compra <= 1000:
        desconto = 0.15
    else:
        desconto = 0.20
    return desconto


valor_compra = float(input("Informe o valor total da compra: "))

valor_desconto = valor_compra * calc_desconto(valor_compra)
valor_total = valor_compra - valor_desconto

print(f"O valor total da compra com desconto  : R${valor_total:.2f}")
