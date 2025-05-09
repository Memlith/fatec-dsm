create database loja_de_disco;

create table loja_de_disco.artista(
	id_artista int primary key,
	nome varchar(80)
	);
	
create table loja_de_disco.disco(
	id_disco int primary key,
	nome varchar(80),
	quant_musicas int,
	ano int,
	id_artista int,
	foreign key (id_artista) references artista(id_artista)
	);
	
insert into loja_de_disco.artista values(467,"Paleface Swiss");
insert into loja_de_disco.artista values(139,"Mastodon");
insert into loja_de_disco.artista values(453,"Death");

insert into loja_de_disco.disco values(10,"Hushed and Grim",15,2021,139);
insert into loja_de_disco.disco values(01,"Chapter 3: The Last Selection",12,2020,467);
insert into loja_de_disco.disco values(05,"Symbolic",09,1995,453);
