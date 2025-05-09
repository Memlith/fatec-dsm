"""
Fix73: Dado o dicionário carro, com as chaves marca, modelo, ano, cor, 
escreva um código para acessar e imprimir em ordem alfabética o valor de cada chave.
carro = { 'marca': 'Fiat','modelo': 'Uno', 'ano': 2015,'cor': 'preto'}
"""
def Aluno():
    ALUNO = "Caio Simonassi"
    RA = "1051392421012"
    print(f"\n{ALUNO}\n{RA}\n")
Aluno()

carro = { 
    'marca': 'Fiat',
    'modelo': 'Uno',
    'ano': 2015,
    'cor': 'preto'
}

carroSort = sorted(carro.items())
print(carroSort)