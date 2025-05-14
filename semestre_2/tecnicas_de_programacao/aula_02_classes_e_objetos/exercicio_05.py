"""
Exercício 5: Métodos de Instância
    Tarefa: Crie uma classe Pessoa com os atributos nome e idade. Adicione um método de instância apresentar() que
    retorna uma string com o nome e a idade da pessoa.
    Objetivo: Compreender como os métodos de instância operam sobre os atributos do objeto.
"""

class Pessoa:
    def __init__(self, nome, idade):
        self.nome = nome
        self.idade = idade

    def apresentar(self):
        print(f"Nome: {self.nome}, Idade: {self.idade}.")


pessoa01 = Pessoa("Caio", 21)

pessoa01.apresentar()