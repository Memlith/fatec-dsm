"""
Exercício 5. Cálculo de salário líquido

Crie um programa que calcule o salário líquido de um funcionário. O salário bruto é dado pelo usuário, e o programa deve descontar:

INSS (10%)

Imposto de Renda (IR) de acordo com a faixa salarial:

Até R$ 2.000,00: isento

De R$ 2.001,00 até R$ 5.000,00: 10%

Acima de R$ 5.000,00: 20%
"""

salario_bruto = float(input("Informe o salário bruto do funcionário: "))
inss = salario_bruto * 0.10

if salario_bruto <= 2000:
    ir = 0
elif salario_bruto <= 5000:
    ir = salario_bruto * 0.10
else:
    ir = salario_bruto * 0.20

salario_liquido = salario_bruto - inss - ir

print(f"O salário líquido do funcionário é R${salario_liquido:.2f}")
