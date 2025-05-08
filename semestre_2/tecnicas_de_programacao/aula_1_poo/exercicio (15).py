"""
Exercício 15 - Criando um Menu Interativo

Crie um menu que permita ao usuário escolher opções até ele decidir sair.
"""

while True:
    print(
        f"""
{"MENU".center(32, "=")}
1 - opção 1
2 - opção 2
3 - opção 3
0 - sair
        """
    )
    match input("Escolha uma opção: "):
        case "1":
            print("Opção 1 escolhida.")
        case "2":
            print("Opção 2 escolhida.")
        case "3":
            print("Opção 3 escolhida.")
        case "0":
            print("Saindo...")
            break
        case _:
            print("Opção inválida.")
