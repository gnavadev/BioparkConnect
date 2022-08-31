-- create schema

CREATE DATABASE ESCOLA;

USE ESCOLA;

CREATE TABLE PROFESSOR(
  professores_id INT PRIMARY KEY NOT NULL AUTO_INCREMENT,
  nome VARCHAR(50) NOT NULL,
  email VARCHAR(50) NOT NULL,
  valor_hora INT UNSIGNED NULL,
  certificados VARCHAR(255) NULL
);

INSERT INTO PROFESSOR (professores_id, nome, email, valor_hora, certificados)
VALUES (1, 'Ze', 'Zeee@gmail.com', 100, 'CRM1' );

INSERT INTO PROFESSOR (professores_id, nome, email, valor_hora, certificados)
VALUES (2, 'Gabriel', 'gabriel@gmail.com', 1000, 'CRM2' );

UPDATE PROFESSOR SET nome='roberto' where nome = 'ze';

-- SELECT * FROM PROFESSOR; Para checar alterações na tabela

DELETE FROM PROFESSOR WHERE nome='roberto';

-- SELECT * FROM PROFESSOR; Para checar alterações na tabela

CREATE TABLE TURMA(
  turmas_id INT PRIMARY KEY NOT NULL AUTO_INCREMENT,
  professores_id INT NOT NULL,
  alunos_id INT UNSIGNED NOT NULL,
  aulas_id INT UNSIGNED NOT NULL,
  data_inicio DATE,
  data_final DATE,
  carga_horaria SMALLINT UNSIGNED NULL
);

INSERT INTO TURMA (turmas_id, professores_id, alunos_id, aulas_id)
VALUES (1,1,1,1);

INSERT INTO TURMA (turmas_id, professores_id, alunos_id, aulas_id)
VALUES (2,2,2,2);

UPDATE TURMA SET turmas_id=3 WHERE turmas_id=1;

-- SELECT * FROM PROFESSOR; Para checar alterações na tabela

DELETE FROM TURMA WHERE turmas_id=1;

-- SELECT * FROM PROFESSOR; Para checar alterações na tabela

CREATE TABLE TURMA_PROFESSOR(
turmas_id INT NOT NULL,
professores_id INT NOT NULL,
CONSTRAINT PROFESSOR_TURMA FOREIGN KEY(professores_id)REFERENCES turma(turmas_id),
CONSTRAINT TURMA_PROFESSOR FOREIGN KEY(turmas_id)REFERENCES PROFESSOR(professores_id),
PRIMARY KEY(turmas_id,professores_id)
);

CREATE TABLE ALUNO(
  alunos_id INT PRIMARY KEY NOT NULL AUTO_INCREMENT,
  cpf CHAR(11) NOT NULL,
  nome VARCHAR(50) NOT NULL,
  email VARCHAR(50) NOT NULL,
  fone VARCHAR(14) NOT NULL,
  data_nascimento DATE
);

INSERT INTO ALUNO (alunos_id, cpf, nome, email, fone)
VALUES (1,'22222222222', 'zeeee', 'zeeee@gmail.com', '1231-1234');

INSERT INTO ALUNO (alunos_id, cpf, nome, email, fone)
VALUES (2,'22222122222', 'UOUUU', 'uouu@gmail.com', '1241-1234');


UPDATE ALUNO SET alunos_id=3 WHERE alunos_id=1;

-- SELECT * FROM ALUNO;

DELETE FROM ALUNO WHERE alunos_id=1;

-- SELECT * FROM PROFESSOR; Para checar alterações na tabela

CREATE TABLE AULA(
aulas_id INT PRIMARY KEY NOT NULL AUTO_INCREMENT,
professores_id INT NOT NULL,
alunos_id INT UNSIGNED NOT NULL,
turmas_id INT UNSIGNED NOT NULL,
data_inicio DATE,
data_final DATE
);

INSERT INTO AULA (aulas_id, professores_id, alunos_id, turmas_id)
VALUES (1,1,1,1);

INSERT INTO AULA (aulas_id, professores_id, alunos_id, turmas_id,data_inicio)
VALUES (2,2,2,2,'2008-11-11');


UPDATE AULA SET aulas_id=6 WHERE alunos_id=1;

SELECT * FROM AULA;

DELETE FROM AULA WHERE aulas_id=6;

-- SELECT * FROM PROFESSOR; Para checar alterações na tabela




