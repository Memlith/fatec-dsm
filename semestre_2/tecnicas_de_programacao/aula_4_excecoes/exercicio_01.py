"""Tarefa: Crie uma função que recebe dois números e tenta retornar a divisão entre eles.
Capture erro de divisão por zero"""


def divisao(a, b):
    if b == 0:
        raise ZeroDivisionError("Não é possivel dividir por zero!")
    return a / b


# print (divisao(200,0)) # ZeroDivisionError
print(divisao(200, 4))  # 50.0
