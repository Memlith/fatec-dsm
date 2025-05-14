"""Tarefa: Crie uma classe Calculadora com método dividir(a, b). Lance erro se b for zero.
Objetivo: Associar tratamento de exceções a métodos de uma classe."""


class Calculadora:

    def __init__(self, numeroA, numeroB):
        self.numeroA = numeroA
        self.numeroB = numeroB

    def __str__(self):
        return f"Numero A: {self.numeroA}\nNumero B: {self.numeroB}"

    def dividir(self):
        if self.numeroB < 0:
            raise ZeroDivisionError("Erro: Não é possivel dividir por zero.")
        return f"Resultado da Divisão = {self.numeroA / self.numeroB}"


calculo01 = Calculadora(10, 20)
calculo02 = Calculadora(250, 0)
print(calculo01)
print(calculo02)

print(calculo01.dividir())
print(calculo02.dividir())
