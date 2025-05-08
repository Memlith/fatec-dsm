/*
1- add chave primaria
2- add um atributo novo em cada tabela
3- add chave estrangeira
4- exclua um atributo
5- altere o nome de uma tabela
*/
-- drop database diskat;
create database diskat;
use diskat;

create table banda(
	id_banda int,
	nome varchar(20),
	endereco varchar(50)
);

create table album(
	id_album int primary key,
	nome_album varchar(50),
	ano varchar(4)
);

alter table banda drop endereco;
alter table banda modify nome varchar(80);
alter table banda rename column nome to nome_banda;
alter table banda rename bandas;
alter table bandas add pais_origem varchar(30);
alter table bandas add ano_formacao varchar(4);
alter table bandas modify id_banda int primary key;


alter table album add genero varchar(20);
alter table album rename column ano to ano_lancamento;
alter table album add id_banda int;
alter table album add constraint foreign key (id_banda) references bandas(id_banda);

