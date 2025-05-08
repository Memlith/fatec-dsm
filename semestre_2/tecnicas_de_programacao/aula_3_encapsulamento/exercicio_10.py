"""**Exercício 10: Classes Aninhadas com Atributos Protetores**

- Tarefa: Crie uma classe Biblioteca que contém uma classe aninhada Livro, com um atributo protegido _titulo.
- Objetivo: Explorar encapsulamento em classes aninhadas.
"""


class Biblioteca:
    def __init__(self, nome):
        self.nome = nome


class Livro(Biblioteca):
    def __init__(self, nome, titulo, autor):
        super().__init__(nome)
        self._titulo = titulo
        self.autor = autor

    def exibir(self):
        print(
            f"Nome Biblioteca: {self.nome} | Titulo: {self._titulo} | Autor: {self.autor}"
        )


livro1 = Livro("Saraiva", "O Senhor dos Aneis", "JRR Tolkien")
livro1.exibir()
