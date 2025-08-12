"""
Exercício 11: Métodos Estáticos
    Tarefa: Crie uma classe Calculadora com um método estático somar(a, b) que retorna a soma de dois números.
    Objetivo: Entender como os métodos estáticos não precisam de instância e são utilizados para funcionalidades utilitárias.
"""


class Calculadora:
    @staticmethod
    def somar(a, b):
        return a + b


num1 = 25
num2 = 10
print(Calculadora.somar(num1,num2))
