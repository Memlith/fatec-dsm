class Carro:
    fabricante = "GM"

    def __init__(self, modelo, ano, cor):
        self.modelo = modelo
        self.ano = ano
        self.cor = cor

    def exibir(self):
        print(
            f"Fabricante: {Carro.fabricante} | Modelo: {self.modelo} | Ano: {self.ano} | Cor: {self.cor}"
        )

    @classmethod
    def altera_fabricante(cls, novo_fabricante):
        Carro.fabricante = novo_fabricante

    @staticmethod
    def vender(preco, imposto):
        return preco * imposto


carro1 = Carro("Kadett", 2000, "Vermelho")
carro2 = Carro("Cruise", 2012, "Branco")

carro1.exibir()
carro2.exibir()

carro1.cor = "Preto"
carro1.exibir()

carro2.altera_fabricante("Toyota")

carro1.exibir()
carro2.exibir()

print(f"Valor de venda: {carro1.vender(60000, 1.1):.2f}")
print(f"Valor de venda: {carro2.vender(100000, 1.2):.2f}")
