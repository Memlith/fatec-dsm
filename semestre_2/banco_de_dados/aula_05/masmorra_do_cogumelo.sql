create database Masmorra_do_Cogumelo;
use Masmorra_do_Cogumelo;

create table cliente (
	codigo_cliente int primary key,
	nome_cliente varchar(60)
	);

create table produto(
	codigo_produto int primary key,
	nome_produto varchar(80)
	);

create table compra(
	codigo_compra int primary key,
	data varchar(10),
	codigo_cliente int,
	codigo_produto int,
	foreign key (codigo_cliente) references cliente(codigo_cliente),
	foreign key (codigo_produto) references produto(codigo_produto)
	);

insert into cliente values (29, 'Pedro');
insert into cliente values (36, 'Raul');

insert into produto values (7, 'Kit Dados');
insert into produto values (22, 'Livro');

insert into compra values (1023, '18-03-2025', 36, 22);
insert into compra values (1024, '24-03-2025', 29, 7);

select * from produto;
select nome_cliente from cliente;
select data, codigo_produto from compra;

select * from produto where nome_produto='Kit Dados';
select * from compra where codigo_produto=7;
select * from cliente where codigo_cliente=29;

update produto set nome_produto='Miniatura' where codigo_produto=22;

select nome_cliente, nome_produto, data_compra from cliente, produto, compra where cliente.codigo_cliente=compra.codigo_cliente and produto.codigo_produto=compra.codigo_produto

