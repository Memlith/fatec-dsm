"""
Exercício 7: Método de Instância com Condicional
    Tarefa: Crie uma classe Aluno com os atributos nome e nota. Adicione um método de instância situacao() que retorna
    "Aprovado" se a nota for maior ou igual a 6 e "Reprovado" caso contrário.
    Objetivo: Trabalhar com métodos de instância que utilizam condicionais.
"""


class Aluno:
    def __init__(self, nome):
        self.nome = nome
        self.notas = []
        self.media = 0

    def apresentar(self):
        print(self.nome, self.notas, self.media)

    def situacao(self):
        print("Calculando média...")
        if self.media < 6:
            print("Aluno reprovado!")
        elif self.media >= 6:
            print("Aluno aprovado!")
        else:
            print("Algo de errado nao está certo")

    def adiciona_nota(self, nota_nova):
        self.notas.append(nota_nova)

    def calcular_media(self):
        return sum(self.notas) / len(self.notas) if self.notas else 0


aluno_caio = Aluno("Caio")

aluno_caio.adiciona_nota(9)
aluno_caio.adiciona_nota(6)
aluno_caio.adiciona_nota(7)

aluno_caio.media = aluno_caio.calcular_media()
aluno_caio.apresentar()
aluno_caio.situacao()
