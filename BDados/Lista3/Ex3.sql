-- create schema

create database REVENDEDORA_CARROS;

use REVENDEDORA_CARROS;

create table automovel(
RENAVAM int primary key not null,
placa varchar(10) not null,
marca varchar(20) not null,
modelo varchar(20) not null,
Ano_de_Fabricacao int not null,
Ano_do_Modelo int not null,
cor varchar(20) not null,
motor varchar(30) not null,
Numero_de_Portas tinyint not null,
Tipo_de_Combustivel varchar(15) not null,
preco decimal(10,2) not null
);

create table enderecoCompleto(
ENDERECO_COMPLETO int primary key not null,
rua varchar(50) not null,
numero int not null,
complemento varchar(50),
cidade varchar(100),
estado varchar(50),
cep varchar(30)
);
create table clientes(
ID_CLIENTE int primary key not null,
nome varchar(50) not null,
sobrenome varchar(50) not null,
telefone varchar(20) not null,
ENDERECO_COMPLETO int not null unique,
constraint endereco foreign key (ENDERECO_COMPLETO) references enderecoCompleto(ENDERECO_COMPLETO)
);

create table vendedores(
ID_VENDEDOR int primary key not null,
nome varchar(50) not null,
sobrenome varchar(50) not null,
telefone varchar(20) not null,
DATA_ADMISSAO datetime not null,
salario_fixo decimal(10,2) not null,
ENDERECO_COMPLETO int not null unique,
constraint endereco_vendedor foreign key (ENDERECO_COMPLETO) references enderecoCompleto(ENDERECO_COMPLETO)
);

create table negocio(
ID_NEGOCIO int primary key not null,
data_negocio datetime not null,
preco_pago decimal(10,2) not null,
ID_VENDEDOR int not null,
ID_CLIENTE int not null,
RENAVAM int not null unique,
constraint vendedor_negocio foreign key (ID_VENDEDOR) references vendedores(ID_VENDEDOR),
constraint cliente_negocio foreign key (ID_CLIENTE) references clientes(ID_CLIENTE),
constraint automovel_negocio foreign key (RENAVAM) references automovel(RENAVAM)
);






