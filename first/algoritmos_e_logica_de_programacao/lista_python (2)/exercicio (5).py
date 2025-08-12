import math
print("Caio Simonassi\n1051392421012\n")
print ("Renzo Trigo Orfila\n1051392421006\n")

aream2= float(input("Digite quantos metros quadrados irá ser pintado: "))
areafolga= aream2 * 1.1
litrom2= areafolga/6
lata= math.ceil(litrom2/18)
latapreço = 80
latatotal = lata*latapreço

print(f"1 litro pra 6 m2 = {litrom2:2f}")
print(f"quantidade de latas de 18L necessarias = {lata}")
print(f"preço total latas necessarias {latatotal:.2f}")









