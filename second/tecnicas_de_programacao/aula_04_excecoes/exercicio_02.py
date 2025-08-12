"""Tarefa: Crie uma função para calcular a média de uma lista de números. Use try-except para capturar erro de tipo, e
no bloco else, imprima a média. Obs: Utilizar o TypeError: acontece quando você usa tipos errados para uma operação.
Objetivo: Praticar o uso do bloco else após try-except."""


def calcular_media(lista):
    return len(lista) / sum(lista)


lista_certa = {0, 2, 4, 6, 8}
lista_erro = {0, "2", 4, "6", 8}
try:
    print(calcular_media(lista_certa))
    print(calcular_media(lista_erro))
except TypeError as error:
    print(f"Erro de tipo: {error}")
