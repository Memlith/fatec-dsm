"""Tarefa: Crie uma classe Loja com métodos adicionar_produto, remover_produto e listar_produtos. Lance exceções ao
tentar remover um produto que não existe.
Objetivo: Trabalhar com listas, métodos de classe e tratamento de erro."""


class ErroProdutoExistente(Exception):
    pass


class Loja:
    def __init__(self, nome):
        self._nome = nome
        self.produtos = []

    def adicionar_produto(self):
        if self._nome in self.produtos:
            raise ErroProdutoExistente("Erro: Esse produto já existe!")
        else:
            self.produtos.append(self._nome)

    def remover_produto(self):
        if self._nome in self.produtos:
            self.produtos.append(self._nome)
        else:
            raise ErroProdutoExistente("Erro: Esse produto não existe")

    def listar_produtos(self):
        print("Produtos:")
        for i in self.produtos:
            print(self._nome)


produto01 = Loja("Copo")
produto02 = Loja("Bandeira")
produto01.adicionar_produto()
produto01.listar_produtos()
produto02.adicionar_produto()
produto02.listar_produtos()
