"""Tarefa: Crie uma função que valida um CPF. Se tiver menos de 11 caracteres, lance uma exceção.
Objetivo: Trabalhar com exceções personalizadas e raise."""


class CPFInvalidoErro(Exception):
    pass


def valida_CPF(cpf):
    if len(cpf) < 11:
        raise CPFInvalidoErro("CPF Invalido!")
    return cpf


seu_cpf = "12345678910"
print(f"Seu CPF: {valida_CPF(seu_cpf)}")
