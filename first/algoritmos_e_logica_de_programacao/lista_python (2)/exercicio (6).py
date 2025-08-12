import math
print("Caio Simonassi\n1051392421012\n")
print ("Renzo Trigo Orfila\n1051392421006\n")

aream2= float(input("Digite quantos metros quadrados irá ser pintado: "))
areafolga= aream2 * 1.1
litrom2= areafolga/6
galao= math.ceil(litrom2/3.6)
galaopreço = 35
galaototal = galao*galaopreço

print(f"1 litro pra 6 m2 = {litrom2:2f}")
print(f"quantidade de galões de 3,6L necessarias = {galao}")
print(f"preço total de galões necessárias = {galaototal:.2f}")