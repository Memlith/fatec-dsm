"""
Fix75: Dado o dicionário produtos, 
remova o item com a chave preço e imprima o dicionário antes e depois da remoção.
produtos = {
'nome': 'Camiseta',
'cor': 'azul',
'tamanho': 'M', 'preço': 49.90
}
"""
def Aluno():
    ALUNO = "Caio Simonassi"
    RA = "1051392421012"
    print(f"\n{ALUNO}\n{RA}\n")
Aluno()

produtos = {
    'nome': 'Camiseta',
    'cor': 'azul',
    'tamanho': 'M', 
    'preço': 49.90
}
print(f"Antes: {produtos}")

produtos.pop('preço')
print(f"\nDepois: {produtos}")