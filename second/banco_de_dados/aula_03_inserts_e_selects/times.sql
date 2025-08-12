create database times;

create table time(
	id_pessoa int primary key;
	nome_pessoa varchar(30);
	nome_time varchar(80);
)

insert into time values (1,"Rildo", "Botafogo");
insert into time values (2,"Jonatas", "Corinthians");
insert into time values (3,"Paulo", "Santos");
insert into time values (4,"Veronica", "São Paulo");
insert into time values (5, "Reinaldo", "Palmeiras");
// insert into time values (6, "Apolo"); erro, chave não especificada
insert into time(id_pessoa, nome_pessoa) values (7, "Lyan");
// insert into time values(8, "João", " "); fica salvo como um espaço no BD ocupando espaço
insert into time values(9,"Caio", null);
insert into time values(10,"Giovana", "Corinthians");

select * from time
// mostra todos os dados da tabela time.

select id_pessoa, nome_time from time;
// mostra apenas as colunas id_pessoa e nome_time da tabela time.

select id_pessoa, nome_time from time where time_pessoa = "Botafogo;
// mostra apenas os ids e nomes com time "Botafogo" da tabela time

update time set nome_time="Botafogo" where id_pessoa=9;
// trocou o time da pessoa com id = 9 para "Botafogo"

delete from time where id_pessoa=7;
// deletou a pessoa com id = 7 da tabela time

drop table time;
// apaga tabela

drop database time;
// apaga o banco de dados


