create database loja_petshop;
use loja_petshop;

create table cliente (
  cpf varchar(11) primary key,
  nomeCliente varchar(60),
  email varchar(60),
  telefone varchar(11)
);

create table fornecedor (
  cnpj varchar(14) primary key,
  nomeFornecedor varchar(60),
  email varchar(60),
  telefone varchar(11)
);

create table produto (
  codProduto int primary key auto_increment, -- atribui automaticamente o cod, começando em 1
  precoCompra float,
  nomeProduto varchar(30),
  marca varchar(20),
  quantidade int,
  especieDestinada varchar(20),
  precoVenda float,
  cnpjFornecedor varchar(14),
  foreign key (cnpjFornecedor) references fornecedor(cnpj)
);

create table compra (
  codCompra int primary key auto_increment,
  dataCompra varchar(10),
  cpfCliente varchar(11),
  codProduto int,
  quantidade int,
  foreign key (cpfCliente) references cliente(cpf),
  foreign key (codProduto) references produto(codProduto)
);

-- procedures de insert
delimiter &&
create procedure sp_insert_cliente(
  in var_cpf varchar(11),
   var_nomeCliente varchar(50),
   var_email varchar(50),
   var_telefone varchar(11)
)
begin
  insert into cliente (cpf, nomeCliente, email, telefone)
  values (var_cpf, var_nomeCliente, var_email, var_telefone);
end
&&

delimiter &&
create procedure sp_insert_fornecedor(
  in var_cnpj varchar(14),
   var_nomeFornecedor varchar(50),
   var_email varchar(50),
   var_telefone varchar(11)
)
begin
  insert into fornecedor (cnpj, nomeFornecedor, email, telefone)
  values (var_cnpj, var_nomeFornecedor, var_email, var_telefone);
end
&&

delimiter &&
create procedure sp_insert_produto(
   in var_precoCompra float,
   var_nomeProduto varchar(30),
   var_marca varchar(20),
   var_quantidade int,
   var_especieDestinada varchar(20),
   var_precoVenda float,
   var_cnpjFornecedor varchar(14)
)
begin
  insert into produto (precoCompra, nomeProduto, marca, quantidade, especieDestinada, precoVenda, cnpjFornecedor)
  values (var_precoCompra, var_nomeProduto, var_marca, var_quantidade, var_especieDestinada, var_precoVenda, var_cnpjFornecedor);
end
&&

delimiter &&
create procedure sp_insert_compra(
  in var_dataCompra varchar(10),
  var_cpfCliente varchar(11),
  var_codProduto int,
  var_quantidade int
)
begin
  insert into compra (dataCompra, cpfCliente, codProduto, quantidade)
  values (var_dataCompra, var_cpfCliente, var_codProduto, var_quantidade);
end
&&

-- procedures de select
delimiter &&
create procedure sp_select_compras()
begin
  select
    compra.codCompra,
    compra.dataCompra,
    cliente.nomeCliente,
    compra.quantidade,
    produto.nomeProduto,
    produto.precoVenda,
    produto.marca,
    produto.precoCompra,
    fornecedor.nomeFornecedor,
    ROUND(produto.precoVenda * compra.quantidade, 2) as precoTotal  from compra
  join cliente on compra.cpfCliente = cliente.cpf
  join produto on compra.codProduto = produto.codProduto
  join fornecedor on produto.cnpjFornecedor = fornecedor.cnpj;
end
&&

-- procedure de delete
delimiter &&
create procedure sp_delete_fornecedor(
  in var_cnpj varchar(14)
)
begin
  delete from compra 
  where codProduto in (
    select codProduto from produto where cnpjFornecedor = var_cnpj
  );
  delete from produto where cnpjFornecedor = var_cnpj;
  delete from fornecedor where cnpj = var_cnpj;
end
&&

call sp_insert_cliente("12345678901", "Maria Silva", "maria.silva@email.com", "11999999999");
call sp_insert_cliente("98765432100", "João Souza", "joao.souza@email.com", "21988888888");

call sp_insert_fornecedor("11122233344455", "Ração Top", "contato@racaotop.com", "1133334444");
call sp_insert_fornecedor("55544433322211", "Gateiros", "contato@gateiros.com", "1144445555");

call sp_insert_produto(15.50, "Ração premium", "Pedigree", 100, "Cachorro", 20.99, "11122233344455");
call sp_insert_produto(8.00, "Areia para gatos", "Petplus", 50, "Gato", 12.50, "55544433322211");

call sp_insert_compra("2025-06-01", "12345678901", 1, 30);
call sp_insert_compra("2025-06-02", "98765432100", 2, 20);

call sp_select_compras();

call sp_delete_fornecedor("11122233344455");