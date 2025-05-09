create database lojinha_do_tadeu;
use lojinha_do_tadeu;

create table cliente(
	id_cliente int primary key,
	nome_cliente varchar(35),
	email_cliente varchar(50),
	endereco varchar(50)
);

create table compra(
	id_compra int primary key
);

-- adicionando atributos nas tabelas
alter table cliente add endereco varchar(50);
alter table compra add data_compra varchar(10);
alter table compra add id_cliente int(3);

-- adicionando chave estrangeira, contraint = restrição
alter table compra add contraint id_cliente foreign key (id_cliente) references cliente(id_cliente);

-- editando atributos
alter table cliente modify nome varchar(80);

-- excluindo um atributo
alter table cliente drop email;
alter table cliente drop column endereco;

-- deletando chave primaria
alter table compra drop primary key;
-- alter table cliente drop primary key; -- erro, essa chave primaria tem uma estrangeira.

-- alterando nomes das tabelas
alter table cliente rename cliente_novo
rename table cliente to cliente_novo
-- dão no mesmo resultado


