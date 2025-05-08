"""
**Exercício 6: Sistema de Login com Atributos Privados** - Tarefa: Desenvolva uma classe Usuario que armazene a
__senha de forma segura e tenha um método validar_senha(senha) que compara a senha. - Objetivo: Aprender a proteger
informações sensíveis.
"""


class Usuario:
    def __init__(self, login, senha):
        self._login = login
        self.__senha = senha

    def welcome(self):
        print(f"Bem-vindo {self._login}!")

    def validar_senha(self):
        valida_senha = input("Digite sua senha: ")
        if valida_senha == self.__senha:
            self.welcome()
        else:
            print("Senha invalida.")

    def criar_senha(self):
        nova_senha = input("Digite uma nova senha:")
        self.__senha = nova_senha


usuario01 = Usuario("memlith", "1234")
usuario01.validar_senha()
usuario01.criar_senha()
usuario01.validar_senha()
