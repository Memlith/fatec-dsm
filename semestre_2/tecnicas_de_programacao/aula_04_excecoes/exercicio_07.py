"""Tarefa: Crie uma classe Instrumento que receba nome e preço. Se o preço for negativo, levante uma exceção no método __init__.
Objetivo: Trabalhar com classes, inicialização e tratamento de erro em atributos."""


class MenorQueZeroError(Exception):
    pass


class Instrumento:
    def __init__(self, nome, preco):
        self.nome = nome
        self.preco = preco
        if preco < 1:
            raise MenorQueZeroError("Erro: Preço não pode ser menor que zero.")

    def __str__(self):
        return f"Instrumento: {self.nome} | Preço: {self.preco}"


# instrumento01 = Instrumento("Guitarra", -700) # *MenorQueZeroError* Erro: Preço não pode ser menor que zero.
instrumento02 = Instrumento("Baixo", 1000)

# print(instrumento01)
print(instrumento02)
