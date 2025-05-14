"""Tarefa: Crie uma função que recebe a idade de uma pessoa. Se a idade for menor que 0, use raise para lançar uma exceção personalizada.
Objetivo: Utilizar raise para lançar erros.
"""


class IdadeMenorQueZeroErro(Exception):
    pass


def recebe_idade(idade):
    if idade < 1:
        raise IdadeMenorQueZeroErro("Idade deve ser maior que 0.")
    return idade


sua_idade = int(input("Digite sua idade: "))
print(
    f"Sua idade é: {recebe_idade(sua_idade)
}"
)
