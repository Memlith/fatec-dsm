import math
print("Caio Simonassi\n1051392421012\n")
print ("Renzo Trigo Orfila\n1051392421006\n")

aream2= float(input("Digite quantos metros quadrados irá ser pintado: "))
areafolga= aream2 * 1.1
litrom2= areafolga/6

lata= math.ceil(litrom2/18)
latapreco = 80
latatotal = lata*latapreco

galao= math.ceil(litrom2/3.6)
galaopreco = 35
galaototal = galao*galaopreco

latamistura = math.floor(litrom2 / 18)
litrorestante = litrom2 - (latamistura * 18)
galaomistura = math.ceil(litrorestante / 3.6)
precomistura = (latamistura * 80.00) + (galaomistura * 35.00)
customistura = (latamistura * latapreco) + (galaomistura * galaopreco)

print(f"Quantidade de tinta necessária para pintar {int(aream2)} m2: {latamistura} latas de 18L e {galaomistura} galões de 3,6L")
print(f"Custo total das latas e galões de tinta: R${customistura:.2f}")


































































