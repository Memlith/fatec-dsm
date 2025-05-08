"""
**Exercício 8: Encapsulamento de Salário com Método de Acesso**

- Tarefa: Crie uma classe Funcionario que encapsule o atributo privado __salario e tenha um método informar_salario()
  que retorna o valor.
- Objetivo: Manter a privacidade dos dados financeiros.
"""


class Funcionario:
    def __init__(self, nome, salario):
        self.nome = nome
        self.__salario = salario

    def informar_salario(self):
        return f"Salario: {self.__salario:.2f}"


func1 = Funcionario("Jamys", 1500)
print(func1.informar_salario())
