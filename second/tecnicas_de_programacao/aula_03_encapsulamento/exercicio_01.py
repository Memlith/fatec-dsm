"""
**Exercício 1: Atributo Público com Método de Exibição**
- Tarefa: Crie uma classe Produto com um atributo público nome e um método exibir_nome() que exibe o nome do produto.
- Objetivo: Compreender o uso de atributos públicos em métodos.
"""


class Produto:
    def __init__(self, nome):
        self.nome = nome

    def exibir_nome(self):
        print(f"O nome do produto é: {self.nome}")


produto01 = Produto("Tenis")

print(produto01.nome)
