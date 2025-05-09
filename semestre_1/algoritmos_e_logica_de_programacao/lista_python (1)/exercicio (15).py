print("Caio Simonassi\n1051392421012\n")

totalDias = int(input("Digite a quantidade de dias:"))
dias = int(totalDias)
anos = int(dias // 365.25)
dias = int(dias % 365.25)
meses = int(dias // 30)
dias = int(dias % 30)
print(f"Essa quantidade de dias resulta em {anos} anos, {meses} meses e {dias} dias")
