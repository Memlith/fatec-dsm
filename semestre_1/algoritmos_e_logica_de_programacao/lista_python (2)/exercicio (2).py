print("Caio Simonassi\n1051392421012\n")
print("Renzo Trigo Orfila\n1051392421006\n")
compra1 = float(input("Escreva o valor da compra 1:"))
compra2 = float(input("Escreva o valor da compra 2:"))
compra3 = float(input("Escreva o valor da compra 3:"))
desc1 = 0
desc2 = 0
desc3 = 0

if compra1 >= 300:
    desc1 = 0.20
elif compra1 >= 200:
    desc1 = 0.15
elif compra1 >= 100:
    desc1 = 0.10

if compra2 >= 300:
    desc2 = 0.20
elif compra2 >= 200:
    desc2 = 0.15
elif compra2 >= 100:
    desc2 = 0.10

if compra3 >= 300:
    desc3 = 0.20
elif compra3 >= 200:
    desc3 = 0.15
elif compra3 >= 100:
    desc3 = 0.10

compra1desconto = compra1*desc1
compra1total = compra1-compra1desconto

compra2desconto = compra2*desc2
compra2total = compra2-compra2desconto

compra3desconto = compra3*desc3
compra3total = compra3-compra3desconto

print(f"A compra 1 no valor de {compra1} com desconto ficou {compra1total}")

print(f"A compra 2 no valor de {compra2} com desconto ficou {compra2total}")

print(f"A compra 3 no valor de {compra3} com desconto ficou {compra3total}")
