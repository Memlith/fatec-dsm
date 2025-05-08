"""Tarefa: Crie uma exceção personalizada chamada ErroSaldoInsuficiente para ser usada na classe ContaBancaria.
Objetivo: Aprender a criar exceções customizadas em POO."""


class ErroSaldoInsuficiente(Exception):
    pass


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
            raise ErroSaldoInsuficiente("Saldo indisponivel para saque.")
        self._saldo -= valorSaque
        print(f"Saque feito com sucesso!\nSaldo: R${self._saldo}")


conta01 = ContaBancaria(0)

conta01.deposito(5000)
conta01.saque(4000)
conta01.saque(2000)
