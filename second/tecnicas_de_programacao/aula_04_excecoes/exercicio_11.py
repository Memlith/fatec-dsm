"""
Tarefa: Crie uma classe base Veiculo e uma classe derivada Carro. No construtor de Carro, valide que a quantidade de
portas seja maior que zero. Objetivo: Praticar herança e validação."""


class Veiculo:
    def __init__(self, cor, ano, marca, modelo):
        self.cor = cor
        self.ano = ano
        self.marca = marca
        self.modelo = modelo


class Carro(Veiculo):
    def __init__(self, cor, ano, marca, modelo, portas):
        super().__init__(cor, ano, marca, modelo)
        self.portas = portas
        if self.portas <= 0:
            raise ValueError("Numero de portas deve ser maior que zero.")

    def __str__(self):
        return f"cor:{self.cor}, ano:{self.ano}, marca:{self.marca}, modelo:{self.modelo}, portas:{self.portas}"


carro01 = Carro("Vermelho", 1962, "Honda", "Civic", 2)
print(carro01)

carro02 = Carro("Azul", 2014, "Ford", "Focus", -4)
print(carro02)
