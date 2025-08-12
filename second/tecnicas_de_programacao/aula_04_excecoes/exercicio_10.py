"""
Tarefa: Crie uma classe ContaBancaria que permita depósito e saque. Lance exceções para saques acima do saldo
disponível.
Objetivo: Aplicar raise em métodos de classes."""


class ContaBancaria:
    def __init__(self, saldo):
        self._saldo = saldo

    def deposito(self, valorDeposito):
        print("Depositando...")
        self._saldo += valorDeposito
        print(f"Valor depositado com sucesso!\nSaldo: R${self._saldo}")

    def saque(self, valorSaque):
        print("Sacando...")
        if valorSaque > self._saldo:
            raise ValueError("Valor de saque acima do saldo disponivel.")
        self._saldo -= valorSaque
        print(f"Saque feito com sucesso!\nSaldo: R${self._saldo}")


conta01 = ContaBancaria(0)

conta01.deposito(5000)
conta01.saque(4000)
conta01.saque(2000)
