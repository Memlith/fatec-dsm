class Aluno:
    def __init__(self, id_aluno, nome):
        self.id_aluno = id_aluno
        self.nome = nome
        self.cursos = []

    def exibir_info(self):
        print(f"ID: {self.id_aluno} | Nome: {self.nome}")
        print(
            f"Cursos: {', '.join(self.cursos) if self.cursos else 'Nenhum curso matriculado'}"
        )

    def matricular(self, curso):
        self.cursos.append(curso)
        print(f"{self.nome} foi matriculado em {curso}")


# criando objeto
aluno1 = Aluno(1, "Carlos")

# criando dicionario de alunos
alunos = {
    12: Aluno(12, "Caio"),
    29: Aluno(29, "Pedro"),
    24: Aluno(24, "Raul"),
}

alunos[12].matricular("Desenvolvimento de Software"),
alunos[29].matricular("Analise de Sistemas")

for aluno in alunos.values():
    aluno.exibir_info()
