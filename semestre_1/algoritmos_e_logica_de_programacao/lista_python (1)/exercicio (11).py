print("Caio Simonassi\n1051392421012\n")

BOLSA = 2000.00
DESCONTO = 10
JUROS = 5
pagAVista = BOLSA-((BOLSA/100)*DESCONTO)
pagParcelado = BOLSA/3
valParcelaJuros = BOLSA+((BOLSA/100)*JUROS)
pagParcelaJurosCalc = valParcelaJuros/10
print(f"A Bolsa custa R${BOLSA:.2f}" )
print(f"A Vista com {DESCONTO}% de desconto: R${pagAVista}")
print(f"Parcelado em 3x R${pagParcelado:.2f} sem juros, Total de: R${BOLSA}")
print(f"Parceçado em 10x de R${pagParcelaJurosCalc:.2f} com {JUROS}% de Juros, Total de : R${valParcelaJuros}")