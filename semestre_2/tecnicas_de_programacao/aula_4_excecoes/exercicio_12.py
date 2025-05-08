"""
Tarefa: Crie uma classe Pessoa que recebe o nome e a idade como parâmetros. No método verificar_maioridade, use
try-except para garantir que a idade seja um número inteiro. Objetivo: Tratar erros de tipo e validar dados
numéricos."""


class Pessoa:
    def __init__(self, nome, idade):
        self.nome = nome
        self.idade = idade

    def verificar_maioridade(self):
        try:
            idade = int(self.idade)
            if idade >= 18:
                print(f"{self.nome} é maior de idade")
            else:
                print(f"{self.nome} não é maior de idade")
        except ValueError:
            print("Idade deve ser um valor inteiro!")


caio = Pessoa("Caio", 21)
beatriz = Pessoa("Beatriz", 14)
jamilly = Pessoa("Jamilly", "vinte")

caio.verificar_maioridade()
beatriz.verificar_maioridade()
jamilly.verificar_maioridade()
