"""
**Exercício 9: Controle de Atributos Privados com Métodos Públicos**

- Tarefa: Implemente uma classe Livro com atributos públicos titulo e autor, e um atributo privado __isbn com um
  método get_isbn() para acesso.
- Objetivo: Diferenciar atributos públicos e privados.
"""


class Livro:
    def __init__(self, titulo, autor, isbn):
        self.titulo = titulo
        self.autor = autor
        self.__isbn = isbn

    def get_isbn(self):
        return self.__isbn
