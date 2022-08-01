-- create schema

create database CLINICA;

use CLINICA;

create table sala(
Numero_sala int primary key not null unique,
check (Numero_sala > 1 AND Numero_sala < 50),
Andar int not null unique,
check (Andar < 12),
CRM varchar(15) unique not null
);

alter table sala
add foreign key (CRM) references medicos(CRM);

create table medicos(
CRM varchar(15) primary key unique not null,
Nome varchar(40) not null,
Idade int,
check (idade>23),
Especialidade char(20) not null default'ortopedia',
CPF varchar(15) unique not null,
DataDeAdmissao date
);

create table pacientes(
RG varchar(15) primary key unique not null,
Nome varchar(40) not null,
Data_Nascimento date,
Cidade char(30) default'Itabuna',
Doenca varchar(40) not null,
Plano_Saude varchar(40) not null default'SUS'
);

create table funcionarios(
Matricula varchar(15) primary key unique not null,
Nome varchar(40) not null,
Data_Nascimento date not null,
Data_Admissao date not null,
Cargo varchar(40) not null default'Assistente Medico',
Salario float not null default 510.00
);

CREATE TABLE consultas (
    Codigo_Consulta INT PRIMARY KEY UNIQUE NOT NULL,
    Data_Horario DATETIME
);

alter table consultas
add CRM varchar(15),
add RG_PACIENTE varchar(15),
add foreign key (RG_PACIENTE) references pacientes(RG),
add foreign key (CRM) references medicos(CRM);




