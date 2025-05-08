"""
Exercício 3: Atributos de Instância

    Tarefa: Crie uma classe Produto com os atributos nome e preco. Crie uma instância de Produto e modifique o atributo preco.
    Objetivo: Compreender que atributos de instância são específicos de cada objeto.

"""

class Produto:

    def __init__(self,nome,preco):
        self.nome = nome
        self.preco = preco


produto01 = Produto("Dado",35)
print(f"Nome: {produto01.nome} Preço: {produto01.preco}")
produto01.preco = 50
print(f"Nome: {produto01.nome} Preço: {produto01.preco}")