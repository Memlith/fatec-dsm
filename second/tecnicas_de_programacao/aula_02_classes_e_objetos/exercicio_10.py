"""
Exercício 10: Método de Classe Criando Instâncias
    Tarefa: Crie uma classe Pessoa com o método de classe criar_pessoa(nome, idade) que cria e retorna uma instância de Pessoa.
    Objetivo: Demonstrar como métodos de classe podem ser usados para criar instâncias.
"""


class Usuario:
    quantidade_usuarios = 1
    usuarios = {}

    def __init__(self, nome, idade):
        self.nome = nome
        self.idade = idade

    @classmethod
    def criar_usuario(cls, nome, idade):
        print("Criando novo usuario...")
        usuario = cls(nome, idade)
        id_usuario = f"usuario{cls.quantidade_usuarios}"
        cls.usuarios[id_usuario] = usuario
        cls.quantidade_usuarios += 1
        print(f"Bem-vindo Usuario {id_usuario} criado!\n")
        return usuario
    @classmethod
    def exibir_usuario(cls, id_usuario):
        usuario = cls.usuarios.get(id_usuario)
        if usuario:
            print(f"{id_usuario} : {usuario.nome} | {usuario.idade} Anos\n")
        else:
            print("Usuário não encontrado!\n")
    @classmethod
    def exibir_tudo(cls):
        for id_usuario, usuario in cls.usuarios.items():
            print(f"{id_usuario} : {usuario.nome} | {usuario.idade} Anos")
        print("\n")


usuario1 = Usuario.criar_usuario("Caio", 21)
usuario2 = Usuario.criar_usuario("Pedro", 21)

Usuario.exibir_tudo()

Usuario.exibir_usuario("usuario1")
