"""
Exercício 2. Controle de estoque

Crie um sistema para controlar o estoque de produtos. O programa deve pedir a quantidade inicial de um produto, a quantidade vendida e a quantidade recebida. Calcule a quantidade final em estoque.
"""

inicial = int(input("Informe a quantidade inicial: "))
vendida = int(input("Informe a quantidade vendida: "))
recebida = int(input("Informe a quantidade recebida: "))
final = inicial - vendida + recebida
print("A quantidade final em estoque  : ", final)
