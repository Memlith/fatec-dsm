"""Tarefa: Crie uma função para abrir e ler um arquivo de texto. Garanta que o arquivo seja fechado usando finally.
Objetivo: Praticar o uso de finally para liberar recursos."""


def open_read(nome_arquivo):
    try:
        with open(nome_arquivo, "r") as arquivo:
            return arquivo.read()
    except FileNotFoundError:
        return "Erro: Arquivo não encontrado"
    finally:
        print("Fim da tentativa de leitura")


conteudo = open_read("meuarquivo.txt")
print(conteudo)
