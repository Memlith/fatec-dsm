"""
Exercício 18 - Média de Notas

Crie uma função calcular_media(notas) que recebe uma lista de notas e retorna a média.
"""


def media_notas(notas):
    return sum(notas) / len(notas)


lista_notas = [10, 8, 9, 7, 9]

while True:
    print(
        f"""
{"MENU".center(32, "=")}
1 - adicionar nota
2 - listar notas
3 - calcular média
4 - excluir nota
0 - sair
        """
    )
    match input("Escolha uma opção: "):
        case "1":
            print("ADD NOTA".center(32, "="))
            add_nota = int(input("Insira uma nota: "))
            if add_nota > 0 and add_nota <= 10:
                lista_notas.append(add_nota)
                print(f"Nota adicionada com sucesso!")
            else:
                print(f"Nota invalida!")
        case "2":
            print("LIST NOTA".center(32, "="))
            print(f"Notas: {lista_notas}")
        case "3":
            print("CALC MEDIA".center(32, "="))
            print(f"A média das notas é :{media_notas(lista_notas)}")
        case "4":
            print("EXCLUIR NOTA".center(32, "="))
            print(f"Notas: {lista_notas}")
            excluir_nota = int(input("Remover nota: "))
            if excluir_nota in lista_notas:
                lista_notas.remove(excluir_nota)
                print(f"Nota removida com sucesso!")
            else:
                print(f"Nota {excluir_nota} nao encontrada")
        case "0":
            print("SAIR".center(32, "="))
            print("Saindo...")
            break
        case _:
            print("ERRO".center(32, "="))
            print("Opção inválida.")
