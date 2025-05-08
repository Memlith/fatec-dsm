"""Tarefa: Crie uma função que pede dois números e realiza a divisão. Capture ValueError (entrada inválida) e
ZeroDivisionError (divisão por zero). Utilize else e finally.
Objetivo: Combinar múltiplos tipos de exceções em uma única função."""


def dividir_numeros():
    try:
        a = float(input("Digite o primeiro número: "))
        b = float(input("Digite o segundo número: "))
        resultado = a / b
    except ValueError:
        print("Você deve digitar números válidos.")
    except ZeroDivisionError:
        print("Não é possível dividir por zero.")
    else:
        print(f"Resultado da divisão: {resultado}")
    finally:
        print("Operação finalizada.")


dividir_numeros()
