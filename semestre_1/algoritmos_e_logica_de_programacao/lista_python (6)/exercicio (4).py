"""
Fix74: Dado o dicionário aluno, verifique se a chave nota existe. 
Caso exista, exiba o valor. 
Caso contrário, adicione a chave nota com o valor 7.5 e mostre o dicionário em ordem alfabética.
aluno = { 
'nome': 'Ana',
'idade': 22,
'curso': 'Engenharia'
}
"""
def Aluno():
    ALUNO = "Caio Simonassi"
    RA = "1051392421012"
    print(f"\n{ALUNO}\n{RA}\n")
Aluno()


aluno = { 
    'nome': 'Ana',
    'idade': 22,
    'curso': 'Engenharia'
}

alunoSort = sorted(aluno.items())

if "nota" in alunoSort:
    print(alunoSort)
else:
    aluno['nota'] = 7.5
    alunoSort = sorted(aluno.items())
    print(alunoSort)