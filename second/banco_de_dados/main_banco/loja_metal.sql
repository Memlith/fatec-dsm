-- drop database loja_metal;
-- criação do banco
create database loja_metal;
use loja_metal;

-- criação das tables
create table bandas (
	id_banda int primary key,
	nome_banda varchar(100) unique,
	quant_disco tinyint check(quant_disco > 0),
	pais_origem varchar(50),
	ano_formacao int
);

create table discos (
	id_disco int primary key,
	titulo_disco varchar(100) not null,
	ano_lancamento int not null,
	genero varchar(20) check(genero in('heavy metal', 'thrash metal', 'death metal',
			'black metal', 'power metal', 'symphonic metal', 'doom metal',
			'folk metal', 'progressEsive metal', 'groove metal', 'metalcore',
			'deathcore', 'nu metal', 'speed metal', 'viking metal',
			'melodic death metal', 'industrial metal', 'glam metal',
			'sludge metal', 'post-metal')),
	id_banda int,
	foreign key (id_banda) references bandas(id_banda)
);

create table clientes (
	id_cliente int primary key,
	rg varchar(10) unique,
	nome_cliente varchar(100) not null,
	email varchar(100) not null,
	cidade varchar (50)
);

create table vendas (
	id_venda int primary key,
	id_cliente int,
	id_disco int,
	data_venda varchar(10) not null,
	foreign key (id_cliente) references clientes(id_cliente),
	foreign key (id_disco) references discos(id_disco)
);

-- inserts
insert into bandas values
	(123,"Opeth",13, "Suécia", 1990),
	(345,"Sepultura",15, "Brasil", 1984),
	(567,"Dream Teather",15, "Estados Unidos", 1985);

insert into discos values
	(234, "Deliverance", 2002,'progressive metal', 123),
	(456, "Roots", 1996,'groove metal', 345),
	(678, "Images and Words", 1992,'groove metal', 567);

insert into clientes values
	(135,'0987654321', "Caio Metaleiro", "caio.metal@gmail.com", "Indaiatuba"), 
	(246,'1029384756', "Marcos Batecabesa", "marcos.batecabesa@gmail.com", "Sumaré"), 
	(357,'9812074567', "Jamilly Ofadown", "jamilly.ofadown@gmail.com", "Sumaré"), 
	(468,'1234567890', "Rebeca Misfiter", "rebeca.misfiter@gmail.com", "Indaituba");

	
insert into vendas values
	(147, 135, 234, "12/05/2024"), 
	(258, 468, 456, "30/07/2024"), 
	(369, 246, 456, "30/08/2024"), 
	(470, 357, 678, "22/04/2025"),
	(581, 135, 678, "22/04/2025");

-- updates	
update bandas set 
	nome_banda = "DEATH",
	quant_disco=7,
	pais_origem = "Estados Unidos",
	ano_formacao = 1983 
	where id_banda = 567;

update discos set 
	titulo_disco = "Symbolic",
	ano_lancamento = 1995,
	genero = 'death metal'
	where id_disco = 678;

- select com joins	
select 
    vendas.data_venda as "data",
    clientes.nome_cliente as cliente,
    discos.titulo_disco as disco,
    bandas.nome_banda as banda,
    discos.ano_lancamento as ano,
    discos.genero as genero
from bandas
    left join discos on discos.id_banda = bandas.id_banda
    left join vendas on vendas.id_disco = discos.id_disco
    left join clientes on vendas.id_cliente = clientes.id_cliente;

-- criação de procedures
delimiter &&
create procedure sp_banda_insert
(
	in	var_id int,
	var_nome varchar(100),
	var_pais_ori varchar(50),
	var_quant_discos tinyint c
	var_ano_form int
)
	begin
		replace into bandas values
		(
			var_id,
			var_nome,
			var_pais_origem,
			var_quant_discos,
			var_ano_form
		);
	end
&&

call sp_bandas_insert(122,"Avenged Sevenfold","USA","13","1999");

delimiter &&
create procedure sp_banda_select
(
	in var_id int
)
	begin
	if (var_id is null) then
    		select * from bandas;
  	else
  		select id_banda,banda_nome from bandas where id_banda = var_id;
	end if;

	end
&&

call sp_bandas_select(122);

delimiter &&
create procedure sp_banda_delete
(
	in var_id int
)
	begin
		delete from bandas where id_banda = var_id;	
	end
&&

call sp_bandas_delete(345);
