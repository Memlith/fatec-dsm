class Aluno:
    total_alunos = 0

    def __init__(self, aluno, matricula):
        self.aluno = aluno
        self.matricula = matricula

    def adicionar(self):
        Aluno.total_alunos += 1
        print("Aluno adicionado!")

    def info(self):
        print(f"Aluno: {self.aluno} | Matricula: {self.matricula}")


aluno01 = Aluno("Jamilly", 13579)
aluno01.info()
aluno01.adicionar()


aluno02 = Aluno("Caio", 24680)
aluno02.info()
aluno02.adicionar()

print(f"Total alunos = {Aluno.total_alunos}")
