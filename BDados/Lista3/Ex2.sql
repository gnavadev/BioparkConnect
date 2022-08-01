-- create schema

create database ELEICAO;

use ELEICAO;


create table cargo(
Codigo_Cargo int primary key unique not null,
Nome_Cargo varchar(30) unique not null 
check(Nome_Cargo != 'Prefeito' AND Nome_Cargo != 'Vereador'),
Salario float not null default 17000.00,
Numero_Vagas int unique not null
);


CREATE TABLE partido (
    Codigo_Partido INT PRIMARY KEY UNIQUE NOT NULL,
    Sigla CHAR(5) UNIQUE NOT NULL,
    Nome VARCHAR(40) UNIQUE NOT NULL,
    Numero VARCHAR(40) NOT NULL
);


create table candidato( 
Numero_Candidato int primary key unique not null,
Nome varchar(40) unique not null,
Codigo_Cargo int not null,
Codigo_Partido int not null,
constraint PossuiPartirdo foreign key (Codigo_Partido) references partido(Codigo_Partido),
constraint PossuiCargo foreign key (Codigo_Cargo) references cargo(Codigo_Cargo)
);

CREATE TABLE eleitor (
    Titulo_Eleitor VARCHAR(30) PRIMARY KEY UNIQUE NOT NULL,
    Zona_Eleitoral CHAR(5) NOT NULL,
    Sessao_Eleitora CHAR(5) NOT NULL,
    Nome VARCHAR(40) NOT NULL
);

CREATE TABLE voto (
    Titulo_Eleitor VARCHAR(30) PRIMARY KEY UNIQUE NOT NULL,
    Numero_candidato INT NOT NULL,
    CONSTRAINT PossuiCandidato FOREIGN KEY (Numero_candidato)
        REFERENCES candidato (Numero_candidato)
);

