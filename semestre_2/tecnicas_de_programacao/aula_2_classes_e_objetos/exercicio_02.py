"""
Exercício 2: Atributos com Construtor

    Tarefa: Crie uma classe Carro com os atributos modelo e ano. Use o construtor __init__ para inicializar esses atributos e crie uma instância de Carro.
    Objetivo: Entender o uso de atributos dentro do construtor.
"""


class Pessoa:
    def __init__(self,nome,idade):
        self.nome = nome
        self.idade = idade

pessoa1 = Pessoa("Caio",21)