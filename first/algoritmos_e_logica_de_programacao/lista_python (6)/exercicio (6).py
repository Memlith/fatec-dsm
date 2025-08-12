"""
Fix76: Dada a lista de ling_programação, 
crie um dicionário que conte o número de ocorrências de cada palavra e imprima o resultado.

ling_programação = ['python', 'java', 'R','python', 'C', 'R', 'python', 'PHP', 'java', 'R','C++', 'PHP']
"""
def Aluno():
    ALUNO = "Caio Simonassi"
    RA = "1051392421012"
    print(f"\n{ALUNO}\n{RA}\n")
Aluno()

ling_programação = ['python', 'java', 'R','python', 'C', 'R', 'python', 'PHP', 'java', 'R','C++', 'PHP']

contador = {}

for linguagem in ling_programação:
    if linguagem in contador:
        contador[linguagem] += 1
    else:
        contador[linguagem] = 1

print(contador)

