"""Tarefa: Crie uma classe Aluno com atributos nome e nota. Implemente um método para validar que nota seja um número
entre 0 e 10.
Objetivo: Validar atributos dentro de classes."""


class valorNotaInvalidaErro(Exception):
    pass


class Aluno:
    def __init__(self, nome, nota):
        self.nome = nome
        self.nota = nota

    def valida_nota(nota_validar):
        if nota_validar > 10 or nota_validar < 10:
            raise valorNotaInvalidaErro("Erro: Valor da nota invalido.")
        return True

    def adiciona_nota(self, nova_nota):
        if Aluno.valida_nota(nova_nota) == True:
            nova_nota = self.nota


aluno01 = Aluno("Caio", 0)
aluno01.adiciona_nota(15)
aluno01.adiciona_nota(-2)
aluno01.adiciona_nota(8)
