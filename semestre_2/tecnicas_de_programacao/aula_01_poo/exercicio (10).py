"""
Exercício 10 - Contando Vogais

Peça ao usuário para digitar uma palavra e conte quantas vogais existem nela.
"""

palavra = input("Digite uma palavra: ")
vogais = "aeiou"
conta_vogais = 0

for letra in palavra.lower():
    if letra in vogais:
        conta_vogais += 1

print(f"A palavra >{palavra}< contém >{conta_vogais}< vogais.")
