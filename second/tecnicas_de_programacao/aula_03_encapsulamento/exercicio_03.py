"""
**Exercício 3: Controle de Acesso com Métodos Privados**
- Tarefa: Desenvolva uma classe ContaBancaria com um atributo privado __senha e métodos acessores para acessar o saldo
  e realizar operações.
- Objetivo: Garantir o controle de acesso aos atributos privados.
"""


class ContaBancaria:
    def __init__(self, titular, senha, saldo):
        self.__titular = titular
        self.__senha = senha
        self.__saldo = saldo
        self.__extrato = []

    def welcome(self):
        print(f"Bem-vindo! {self.__titular}\n")

    def __verificar_saldo(self):
        return self.__saldo

    def saque(self, valor_saque):
        try_senha = input("Digite sua senha para sacar:")
        if try_senha:
            if valor_saque <= self.__saldo:
                self.__saldo -= valor_saque
                print(f"Saque de {valor_saque} concluido!\n")
                self.__extrato.append(f"-R${valor_saque:.2f}")

            else:
                print("Saldo insuficiente.\n")
        else:
            print("Senha invalida.\n")

    def deposito(self, valor_depoisto):
        try_senha = input("Digite sua senha para depositar:")
        if try_senha:
            if valor_depoisto > 0:
                self.__saldo += valor_depoisto
                print(f"Depoisto de {valor_depoisto} concluido!\n")
                self.__extrato.append(f"+R${valor_depoisto:.2f}")
            else:
                print("Valor deve ser maior que 0.\n")
        else:
            print("Senha invalida.\n")

    def ver_extrato(self):
        return print(self.__extrato)


conta01 = ContaBancaria("Caio", "1234", 1000)
conta01.welcome()

conta01.deposito(5000)
conta01.saque(2500)
# conta01.__verificar_saldo()  # erro pois a função é privada
conta01.ver_extrato()
