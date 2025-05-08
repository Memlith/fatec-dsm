CREATE DATABASE Biblioteca;
USE Biblioteca;

CREATE TABLE Nacionalidade (
    id_nacionalidade int primary key,
    pais varchar(100) not null unique
);

CREATE TABLE Editora (
    id_editora int primary key,
    nome varchar(100) not null unique
);

CREATE TABLE Genero (
    id_genero int primary key,
    nome varchar(50) not null unique
);

CREATE TABLE Autor (
    id_autor int primary key,
    nome varchar(100) not null,
    id_nacionalidade int not null,
    foreign key (id_nacionalidade) references Nacionalidade(id_nacionalidade)
);

CREATE TABLE Livro (
    id_livro int primary key,
    titulo varchar(200) not null,
    ano_publicacao year not null,
    id_autor int not null,
    id_editora int not null,
    id_genero int not null,
    foreign key (id_autor) references Autor(id_autor),
    foreign key (id_editora) references Editora(id_editora),
    foreign key (id_genero) references Genero(id_genero)
);
