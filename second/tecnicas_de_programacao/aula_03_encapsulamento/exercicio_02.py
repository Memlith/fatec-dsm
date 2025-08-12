"""
**Exercício 2: Atributo Protegido com Método de Modificação**

- Tarefa: Implemente uma classe Carro com um atributo protegido _modelo e um método atualizar_modelo(modelo) para
  alterar seu valor.
- Objetivo: Explorar o uso de atributos protegidos.
"""


class Carro:
    def __init__(self, marca, modelo, ano):
        self._modelo = modelo
        self.marca = marca
        self.ano = ano

    def atualizar_modelo(self, novo_modelo):
        self._modelo = novo_modelo

    def info(self):
        print(f"Marca: {self.marca} | Modelo: {self._modelo} | Ano: {self.ano}")


carro01 = Carro("Honda", "Fit", 2014)
carro01.info()
carro01.atualizar_modelo("Civic")
carro01.info()
