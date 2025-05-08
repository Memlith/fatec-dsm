"""
 Exercício 9 - Somando Números Pares

Some todos os números pares de 1 a 100 e exiba o resultado.
"""

pares_somados = 0

for i in range(1, 101):
    if i % 2 == 0:
        print(i)
        pares_somados += i

print(f"A soma dos pares de 1 a 100 é {pares_somados}")
