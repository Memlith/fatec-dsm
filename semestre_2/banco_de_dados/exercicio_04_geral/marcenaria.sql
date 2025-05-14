/* 
Monassi Móveis Planejados

Banco de dados de uma marcenaria de móveis planejados de garagem, com tabelas para clientes, materiais, estoque, fornecedores e projetos ja que um cliente pode ter multiplos

Cliente:
id - primary
nome - varchar 40
telefone - varchar 11
email - varchar 100
endereço - varchar 200

Projeto:
id - primary
id (Cliente) - foreign
descrição - text
data inicio - varchar 10
data fim - varchar 10
status - varchar 15

Material:
id - primary
id (Estoque) - foreign
nome - varchar 60
tipo - varchar 30
preco - float 6,2

Projeto - Material:
id (Projeto) - foreign
id (Material) - foreign
quantidade material - int

Fornecedor:
id - primary
nome - varchar 60
cnpj - varchar 14
telefone - varchar 11
email - varchar 100
endereço - varchar 200

Material - Fornecedor:
id (Material) - foreign
id (Fornecedor) - foreign
preco compra material - float 6,2
tempo entrega - num sei

Estoque:
id - primary
id (Material) - foreign
quantidade disponivel - int
quantidade reservada - int
data movimento - varchar 10
desc - text

Pagamento:
id - primary
id (Projeto) - foreign
data - varchar 10
valor - float 7,2
forma pagamento - varchar 10

Objetivo: (Minimo 3 de cada)
inserts
selects simples
joins
updates
alter tables
 */
create database monassi;
use monassi;

create table clientes(
	id_cli int primary key,
	nome_cli varchar(60),
	telefone_cli varchar(11),
	email_cli varchar(100),
	endereco_cli varchar(200)
);

create table 
