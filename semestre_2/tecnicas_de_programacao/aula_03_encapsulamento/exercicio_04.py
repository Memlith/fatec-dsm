"""
**Exercício 4: Método Protegido para Modificação de Atributo**
*Tarefa: Crie uma classe Aluno com um atributo protegido
_nota e um método protegido modificar_nota(nota) para alterar a nota. -
Objetivo: Trabalhar com métodos protegidos.
"""


class Aluno:
    def __init__(self, aluno, nota):
        self._nota = nota
        self.aluno = aluno

    def welcome(self):
        print(f"Bem-vindo aluno {self.aluno}!")

    def modificar_nota(self):
        print(f"Nota atual: {self._nota}")
        nova_nota = float(input("Digite sua nota nova: "))
        print(f"Nota nova: {nova_nota}")
        self._nota = nova_nota


aluno01 = Aluno("Caio", 6)
aluno01.welcome()
aluno01.modificar_nota()
