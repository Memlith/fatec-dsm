"""
Exercício 8: Métodos de Classe
    Tarefa: Crie uma classe Funcionario com o atributo de classe bonus. Adicione um método de classe
    modificar_bonus(valor) que altera o valor do bônus.
    Objetivo: Compreender como os métodos de classe operam sobre atributos de classe.
"""


class Funcionario:
    def __init__(self, id_funcionario, nome, bonus):
        self.nome = nome
        self.id_funcionario = id_funcionario
        self.bonus = bonus

    def modificar_bonus(self, valor):
        self.bonus = valor
        print(f"Novo bonus de {self.nome} é R${self.bonus:.2f}")


funcionario01 = Funcionario(23, "Jamilly", 200)
funcionario02 = Funcionario(19, "Caio", 400)

valor_bonus = float(input(f"Digite um valor novo para o bonus de {funcionario01.nome}: R$"))
funcionario01.modificar_bonus(valor_bonus)

valor_bonus = float(input(f"Digite um valor novo para o bonus de {funcionario02.nome}: R$"))
funcionario02.modificar_bonus(valor_bonus)
