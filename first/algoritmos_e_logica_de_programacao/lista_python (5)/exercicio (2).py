def aluno():
    print("Caio Simonassi\n1051392421012\n1º Semestre DSM")
aluno()

def calcular_pagamento(HT, VH):

    if HT <= 40:
        salario = HT * VH
        print(f"Seu salario esse mês ficou: R${salario}")
    elif HT > 40:
        salario = 40 * VH
        HT -= 40
        horaExtra = HT * (VH + VH * .5)
        print(f"\nSeu salario esse mês ficou R${salario}, com um adicional de horas extras de R${horaExtra}.\nSomando um total de R${salario+horaExtra}")
    else:
        print("erro")

totalHoras = float(input("Digite quantas horas foram trabalhadas: "))
salarioHora = float(input("Digite quanto vale sua hora: "))

calcular_pagamento(totalHoras, salarioHora)
