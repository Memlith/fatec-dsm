class Produto:
    categoria = "Eletronicos"

    def __init__(self, nome, preco, estoque):
        self.nome = nome
        self.preco = preco
        self.estoque = estoque

    def exibir(self):
        print(
            f"Categoria: {Produto.categoria} | Nome: {self.nome} | Preço: {self.preco} | Estoque: {self.estoque}"
        )

    def vender(self, qtd_venda):
        if self.estoque >= qtd_venda:
            self.estoque -= qtd_venda
            return self.estoque
        else:
            print("Produto em falta de estoque.")

    def repor(self, qtd_repor):
        if qtd_repor > 0:
            self.estoque += qtd_repor
            return self.estoque
        else:
            print("Quantidade invalida")


produto1 = Produto("TV", 2000, 100)
produto2 = Produto("Home Teather", 500, 50)

produto1.exibir()
produto2.exibir()

produto1.vender(120)
produto1.exibir()

produto2.vender(30)
produto2.exibir()

produto1.repor(300)
produto2.repor(50)
produto1.exibir()
produto2.exibir()
