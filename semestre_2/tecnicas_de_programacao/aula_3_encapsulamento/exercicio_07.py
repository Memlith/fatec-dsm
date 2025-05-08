"""
**Exercício 7: Atributo Público com Validação** - Tarefa: Crie uma classe Pessoa com um atributo público idade e um
método validar_idade(), que retorna True se a idade for maior ou igual a 18. - Objetivo: Compreender validações em
atributos públicos.
"""


class Pessoa:
    def __init__(self, nome, idade):
        self.nome = nome
        self.idade = idade

    def validar_idade(self):
        if self.idade >= 18:
            return True
        else:
            return False


pessoa1 = Pessoa("Rildo", 63)
print(pessoa1.validar_idade())

pessoa2 = Pessoa("Bia", 14)
print(pessoa2.validar_idade())
