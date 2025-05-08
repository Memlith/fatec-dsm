"""
Desafio 1: Cadastro de Produtos

*   Crie uma classe Produto com os atributos id_produto, nome e preco.
*   Utilize um dicionário para armazenar os produtos.
*   Permita adicionar e buscar produtos pelo ID.
"""


class Produto:
    def __init__(
        self,
        id_produto,
        nome,
        preco,
    ):
        self.id_produto = id_produto
        self.nome = nome
        self.preco = preco

    def buscar(self):
        print(f"    {self.id_produto}    |    {self.nome}    |    {self.preco}    ")


produtos = {
    1: Produto(1, "Dado", 4.99),
    2: Produto(2, "Ficha", 1.99),
    3: Produto(3, "Livro", 59.99),
}

while True:
    print(
        f"""{"MENU".center(32, "=")}
1 - Cadastrar produto
2 - Remover produto
3 - Buscar produto
4 - Listar produtos
0 - Sair"""
    )

    match input("\nEscolha uma opção => "):
        case "1":
            print("CADASTRA".center(32, "="))
            cad_id_produto = int(input("Digite o ID desejavel para o produto => "))
            cad_nome = input("Digite o NOME do produto => ")
            cad_preco = float(input("Digite o PREÇO do produto => "))
            print("\nCadastrando...")
            produtos[cad_id_produto] = Produto(cad_id_produto, cad_nome, cad_preco)
            print("\nProduto CADASTRADO com sucesso!")

        case "2":
            print("REMOVE".center(32, "="))
            print(
                "ID".center(10, " "),
                "NOME".center(10, " "),
                "PREÇO".center(10, " "),
            )
            for produto in produtos.values():
                produto.buscar()
            rm_id_produto = int(input("Digite o ID do produto que deseja remover => "))
            certeza = input("\nTem certeza que deseja remover esse produto? (Y/N) => ")
            if certeza.upper == "S":
                print("\nRemovendo...")
                produtos.pop(rm_id_produto)
                print("\nProduto REMOVIDO com sucesso!")

        case "3":
            print("BUSCA".center(32, "="))
            id_busca = int(input("Digite o ID do produto que deseja buscar => "))
            if id_busca in produtos:
                print(
                    "ID".center(10, " "),
                    "NOME".center(10, " "),
                    "PREÇO".center(10, " "),
                )
                print(produtos[id_busca].buscar())
        case "4":
            print("LISTA".center(32, "="))
            print(
                "ID".center(10, " "),
                "NOME".center(10, " "),
                "PREÇO".center(10, " "),
            )
            for produto in produtos.values():
                produto.buscar()
        case "0":
            print("SAIR".center(32, "="))
            print("\nSaindo...")
            break

        case _:
            print("ERRO".center(32, "="))
            print("Opção inválida. Tente Novamente.")
