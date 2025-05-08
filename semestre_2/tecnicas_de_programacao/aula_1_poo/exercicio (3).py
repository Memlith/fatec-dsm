"""
 Exercício 3. Cálculo de pontuação de jogo

Crie um programa que calcule a pontuação total de um jogador em um jogo. A pontuação será dada por: 10 pontos por cada vitória. 5 pontos por cada empate. 0 pontos por cada derrota. O programa deve calcular o total de pontos de acordo com o número de vitórias, empates e derrotas informados.
"""


def calcula_pontuacao(vitorias, empates, derrotas):
    print(f"Vitorias: {vitorias}, Empates: {empates}, Derrotas: {derrotas}")
    return (vitorias * 10) + (empates * 5)


vitorias = int(input("Informe o numero de vitorias: "))
empates = int(input("Informe o numero de empates: "))
derrotas = int(input("Informe o numero de derrotas: "))
print(f"A pontuação total :{calcula_pontuacao(vitorias, empates, derrotas)}")
