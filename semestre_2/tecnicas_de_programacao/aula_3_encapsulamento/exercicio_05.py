"""
**Exercício 5: Atributos Privados com Métodos Públicos** - Tarefa: Implemente uma classe Produto onde o atributo privado
__preco pode ser acessado através de um método público get_preco().
Objetivo: Proteger atributos sensíveis e permitir acesso controlado.
"""


class Produto:
    def __init__(self, nome, preco):
        self.__preco = preco
        self.nome = nome

    def get_preco(self):
        return print(f"Nome : {self.nome} | Preço: {self.__preco}")


produto01 = Produto("Bota", 200)

produto01.get_preco()
