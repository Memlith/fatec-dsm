"""
Exercício 6: Método de Instância Modificando Atributos
    Tarefa: Crie uma classe ContaBancaria com os atributos titular e saldo. Adicione um método de instância
    depositar(valor) que aumenta o saldo da conta.
    Objetivo: Demonstrar como modificar atributos de instância usando métodos.
"""

class ContaBancaria:
    def __init__(self, titular, saldo):
        self.titular = titular
        self.saldo = saldo

    def apresentar(self):
        print(f"Nome: {self.titular}, Saldo: {self.saldo}.")

    def depositar(self, valor):
        self.saldo += valor

titular_novo = input("Digite o nome do titular: ")
titular01 = ContaBancaria(titular_novo, 500)
print(f"Bem vindo {titular01.titular}!, seu saldo é R${titular01.saldo:.2f}")
valor_para_depositar = float(input("Digite um valor que deseja depositar: R$"))
titular01.depositar(valor_para_depositar)
print(f"{titular01.titular}, seu novo saldo é R${titular01.saldo:.2f}")