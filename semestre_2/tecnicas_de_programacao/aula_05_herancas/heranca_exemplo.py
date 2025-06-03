class Veiculo:
    def buzinar(self):
        print("bibibibi")

    def ligar(self):
        print("vrum vvrumm")

    def desligar(self):
        print(f"veiculo desligado.")


class Carro(Veiculo):
    pass


class Moto(Veiculo):
    pass


moto = Moto()
carro = Carro()

carro.buzinar()
moto.ligar()
moto.desligar()
