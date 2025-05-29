-- criação do banco e tabela
create database brasil;
use estados;
create table estados
(
  est_id int primary key,
  est_uf char(2),
  est_nome varchar(30)
)

-- criação da procedure para inserir 
delimiter && -- ou $$
create procedure sp_estado_inserir
(
	  in var_id tinyint,
	  var_uf char(2),
	  var_nome varchar(30)
)
  begin
    replace into estados values (var_id,var_uf,var_nome);
  end
  &&

-- chamada da procedure
call sp_estado_inserir(1,"SP","São Paulo");
call sp_estado_inserir(2,"ES","Espirito Santo"); 

-- criação de uma procedure de delete
delimiter $$
create procedure sp_estado_excluir
(
    in var_id tinyint
)
  begin
    delete from estados where est_id = var_id;
  end
  $$

-- chamada da procedure
call sp_estado_excluir(1);

-- criação da procedure de seleção
delimiter $$
create procedure sp_estado_listar
(
    in var_id tinyint
)
  begin
    if (var_id is null) then
      select * from estados;
    else
      select est_id,est_uf,est_nome from estados where est_id = var_id;
    end if;
  end
  $$

-- chama a procedure de listagem
call sp_estado_listar(1);

