create database Universidade;
use Universidade;
 
create table Professores(
	matricula int primary key,
	nome varchar(40) not null,
	rg int(10) unique,
	sexo char(1) check(sexo in ('M','F')),
	idade tinyint check(idade between 21 and 80),
	titulacao varchar(15) check(titulacao in ('graduacao','especialista','mestre','doutor')),
	categoria varchar(15) check(categoria in ('auxiliar','assistente','adjunto','titular')),
	nroTurmas tinyint check(nroTurmas >= 0)
);


