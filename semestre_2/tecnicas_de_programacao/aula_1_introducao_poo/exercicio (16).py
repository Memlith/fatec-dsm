"""
Exercício 16 - Calculadora

Crie uma função calculadora(a, b, operacao) que recebe dois números e uma operação (+, -, *, /) e retorna o resultado.
"""


def calculadora(a, b, operacao):
    match operacao:
        case "+":
            return a + b
        case "-":
            return a - b
        case "*":
            return a * b
        case "/":
            return a / b
        case _:
            return "Operação inválida"


while True:

    print(
        f"""
{"CALCULADORA".center(32, "=")}
1 - Calcular
0 - Sair
        """
    )
    match input("Escolha uma opção: "):
        case "1":
            num1 = float(input("Digite o primeiro número: "))
            num2 = float(input("Digite o segundo número: "))
            operacao = input("Digite a operação (+, -, *, /): ")
            print(f"Resultado: {calculadora(num1, num2, operacao)}")
        case "0":
            break
        case _:
            print("Opção inválida.")
