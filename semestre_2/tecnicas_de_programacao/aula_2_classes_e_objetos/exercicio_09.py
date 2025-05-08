"""
Exercício 9: Métodos de Classe Modificando Atributos de Classe
    Tarefa: Crie uma classe Loja com o atributo de classe desconto. Adicione um método de classe aplicar_desconto() que  modifica o valor do desconto para todas as instâncias.
    Objetivo: Demonstrar a alteração de atributos de classe por métodos de classe.
"""


class Loja:
    desconto = 0

    def __init__(self, nome, preco):
        self.nome = nome
        self.preco = preco

    def aplicar_desconto(self):
        preco_descontado = self.preco - ((self.preco / 100) * self.desconto)
        self.preco = preco_descontado
        print(f"Desconto de {self.desconto}% aplicado a {self.nome}")

    def troca_desconto(self, valor):
        self.desconto = valor
        print(f"Novo valor de desconto aplicado. {self.desconto}%")


produto01 = Loja("Dados", 35)
produto02 = Loja("Lapis", 4)
produto01.aplicar_desconto()
produto02.aplicar_desconto()
print(produto01.preco)
print(produto02.preco)

Loja.desconto = 15
produto01.aplicar_desconto()
produto02.aplicar_desconto()
print(produto01.preco)
print(produto02.preco)
