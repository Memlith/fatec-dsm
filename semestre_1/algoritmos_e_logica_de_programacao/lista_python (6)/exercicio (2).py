"""
Fix72: Crie um dicionário chamado pessoa contendo as seguintes informações: nome, idade e cidade.
Após isso, adicione uma nova chave profissão com o valor "programador". 
Exiba o dicionário antes e depois da alteração em ordem alfabética.

pessoa = { 'nome': 'João', 'idade': 30,'cidade': 'São Paulo'}
"""
def Aluno():
    ALUNO = "Caio Simonassi"
    RA = "1051392421012"
    print(f"\n{ALUNO}\n{RA}\n")
Aluno()


pessoa = { 
    'nome': 'João', 
    'idade': 30,
    'cidade': 'São Paulo'
}
print(f"Antes:\n{pessoa}")

pessoa['profissão'] = 'Programador'

pessoaOrdemAlfa = sorted(pessoa.items())

print(f"\nDepois:\n{pessoaOrdemAlfa}")




