"""
Exercício 4: Atributos de Classe
    Tarefa: Crie uma classe Animal com um atributo de classe categoria. Modifique esse atributo na classe e observe como
    ele afeta todas as instâncias.
    Objetivo: Entender o comportamento de atributos de classe e sua modificação.
"""

class Animal:
    categoria = "sem categoria"
    def __init__(self,nome):
        self.nome = nome

    def exibir_info(self):
        print(f"Nome: {self.nome} é {self.categoria}")

lobo = Animal("Lobo")
urso = Animal("Urso")


lobo.exibir_info()
urso.exibir_info()

Animal.categoria = "mamifero"

lobo.exibir_info()
urso.exibir_info()
