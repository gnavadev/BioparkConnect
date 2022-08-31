CREATE DATABASE ESCOLA;
USE ESCOLA;

CREATE TABLE instrutores (
    id INT NOT NULL AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    email VARCHAR(50) NOT NULL,
    valor_hora INTEGER UNSIGNED NULL,
    certificados VARCHAR(255) NULL,
    PRIMARY KEY (id)
);

INSERT INTO instrutores (nome, email) VALUES ('roberto', 'roberto@gmail.com');
INSERT INTO instrutores (nome, email) VALUES ('roberto1', 'roberto1@gmail.com');
INSERT INTO instrutores (nome, email) VALUES ('roberto2', 'roberto2@gmail.com');
INSERT INTO instrutores (nome, email) VALUES ('roberto3', 'roberto3@gmail.com');
INSERT INTO instrutores (nome, email) VALUES ('roberto3', 'roberto3@gmail.com');
DELETE FROM instrutores 
WHERE
    nome = 'roberto';
DELETE FROM instrutores 
WHERE
    nome = 'roberto1';

SELECT 
    *
FROM
    instrutores;

UPDATE instrutores 
SET 
    nome = 'MARQUINHOS'
WHERE
    id = 1;

UPDATE instrutores 
SET 
    email = 'MARQUINHOS@gmail.com'
WHERE
    nome = 'MARQUINHOS';

CREATE TABLE cursos (
    id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    requisito VARCHAR(255) NULL,
    carga_horaria SMALLINT UNSIGNED NULL,
    preco DOUBLE UNSIGNED NULL,
    PRIMARY KEY (id)
);

INSERT INTO cursos (nome) VALUES ('POG1');
INSERT INTO cursos (nome) VALUES ('POG2');
INSERT INTO cursos (nome) VALUES ('POG3');
INSERT INTO cursos (nome) VALUES ('POG4');
INSERT INTO cursos (nome) VALUES ('POG5');
DELETE FROM cursos 
WHERE
    nome = 'POG1';
DELETE FROM cursos 
WHERE
    nome = 'POG2';

SELECT 
    *
FROM
    cursos;

UPDATE cursos 
SET 
    nome = 'MARQUINHOS'
WHERE
    id = 1;

UPDATE cursos 
SET 
    nome = 'MARQUINHOS4'
WHERE
    id = 4;

 
CREATE TABLE alunos (
    id INT NOT NULL AUTO_INCREMENT,
    cpf VARCHAR(11) NOT NULL,
    nome VARCHAR(50) NOT NULL,
    email VARCHAR(50) NOT NULL,
    fone VARCHAR(14) NOT NULL,
    data_nascimento DATE NULL,
    PRIMARY KEY (id)
);

INSERT INTO alunos (cpf,nome,email,fone) VALUES ('111111111','CAIXA1','caixa1@gmail.com','111111-1111');
INSERT INTO alunos (cpf,nome,email,fone) VALUES ('111111112','CAIXA2','caixa2@gmail.com','111111-1112');
INSERT INTO alunos (cpf,nome,email,fone) VALUES ('111111113','CAIXA3','caixa3@gmail.com','111111-1113');
INSERT INTO alunos (cpf,nome,email,fone) VALUES ('111111114','CAIXA4','caixa4@gmail.com','111111-1114');
INSERT INTO alunos (cpf,nome,email,fone) VALUES ('111111115','CAIXA5','caixa5@gmail.com','111111-1115');
DELETE FROM alunos 
WHERE
    nome = 'CAIXA1';
DELETE FROM alunos 
WHERE
    nome = 'CAIXA3';
SELECT 
    *
FROM
    alunos;
 
CREATE TABLE turmas (
    id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
    instrutores_id INT NOT NULL,
    cursos_id INTEGER UNSIGNED NOT NULL,
    data_inicio DATE NULL,
    data_final DATE NULL,
    carga_horaria SMALLINT UNSIGNED NULL,
    PRIMARY KEY (id),
    INDEX turmas_FKIndex1 (cursos_id),
    INDEX turmas_FKIndex2 (instrutores_id),
    CONSTRAINT CURSO_TURMA_FK FOREIGN KEY (cursos_id)
        REFERENCES cursos (id),
    CONSTRAINT INSTRUTOR_TURMA_FK FOREIGN KEY (instrutores_id)
        REFERENCES instrutores (id)
);

INSERT INTO turmas (instrutores_id, cursos_id, data_inicio) VALUES (1, 1, '2021-10-10');
INSERT INTO turmas (instrutores_id, cursos_id, data_inicio) VALUES (2, 4, '2021-10-10');
INSERT INTO turmas (instrutores_id, cursos_id, data_inicio) VALUES (1, 1, '2021-10-11');
INSERT INTO turmas (instrutores_id, cursos_id, data_inicio) VALUES (1, 1, '2021-10-12');
INSERT INTO turmas (instrutores_id, cursos_id, data_inicio) VALUES (1, 1, '2021-10-13');

DELETE FROM turmas 
WHERE
    data_inicio = '2021-10-10';
DELETE FROM turmas 
WHERE
    data_inicio = '2021-10-11';

SELECT 
    *
FROM
    turmas;

UPDATE turmas 
SET 
    instrutores_id = 2
WHERE
    instrutores_id = 1;

UPDATE turmas 
SET 
    instrutores_id = 3
WHERE
    instrutores_id = 1;
 
CREATE TABLE matriculas (
    id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
    turmas_id INTEGER UNSIGNED NOT NULL,
    alunos_id INT NOT NULL,
    data_matricula DATE NULL,
    PRIMARY KEY (id),
    CONSTRAINT ALUNO_MATRICULA_FK FOREIGN KEY (alunos_id)
        REFERENCES alunos (id),
    CONSTRAINT TURMA_MATRICULA_FK FOREIGN KEY (turmas_id)
        REFERENCES turmas (id)
);

INSERT INTO matriculas (turmas_id, alunos_id) VALUES (10, 4);
INSERT INTO matriculas (turmas_id, alunos_id) VALUES (11, 5);
INSERT INTO matriculas (turmas_id, alunos_id) VALUES (12, 6);
INSERT INTO matriculas (turmas_id, alunos_id) VALUES (13, 7);
INSERT INTO matriculas (turmas_id, alunos_id) VALUES (14, 8);

DELETE FROM matriculas 
WHERE
    turmas_id = '10';
    
DELETE FROM matriculas 
WHERE
    turmas_id = '11';
    
SELECT 
    *
FROM
    matriculas;

