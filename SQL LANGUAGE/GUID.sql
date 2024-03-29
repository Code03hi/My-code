GUID :- GLOBALLY UNIQUE IDENTIFIER 

CREATE DATABASE GUID_IN;

USE GUID_IN;

CREATE TABLE CUSTOMER_DELHI
(
ID INT PRIMARY KEY IDENTITY,
NAME VARCHAR(25)
);

INSERT INTO CUSTOMER_DELHI VALUES ('BAHGWAN JHA');
INSERT INTO CUSTOMER_DELHI VALUES ('MEGHA KUMARI');
INSERT INTO CUSTOMER_DELHI VALUES ('NORA FATEHI');

CREATE TABLE CUSTOMER_PATNA
(
ID INT PRIMARY KEY IDENTITY,
NAME VARCHAR(25)
);


UPDATE CUSTOMER_DELHI SET NAME = 'MEGHA' WHERE ID = 2; 

INSERT INTO CUSTOMER_PATNA VALUES ('BAHGWAN JHA');
INSERT INTO CUSTOMER_PATNA VALUES ('SOBHA KUMARI');
INSERT INTO CUSTOMER_PATNA VALUES ('NEHA KUMARI');

SELECT * FROM CUSTOMER_DELHI;
SELECT * FROM CUSTOMER_PATNA;

CREATE TABLE CUSTOMER 
(
ID INT PRIMARY KEY IDENTITY,
NAME VARCHAR(25)
);

INSERT INTO CUSTOMER
SELECT * FROM CUSTOMER_DELHI
UNION ALL 
SELECT * FROM CUSTOMER_PATNA;

SELECT NEWID();

CREATE TABLE CUSTOMER_DELHI1
(
ID UNIQUEIDENTIFIER PRIMARY KEY DEFAULT NEWID(),
NAME VARCHAR(25)
);

INSERT INTO CUSTOMER_DELHI1 VALUES (DEFAULT,'BAHGWAN JHA');
INSERT INTO CUSTOMER_DELHI1 VALUES (DEFAULT,'MEGHA KUMARI');
INSERT INTO CUSTOMER_DELHI1 VALUES (DEFAULT,'NORA FATEHI');

SELECT * FROM CUSTOMER_DELHI1;
SELECT * FROM CUSTOMER_PATNA1;
SELECT * FROM CUSTOMER1;


CREATE TABLE CUSTOMER_PATNA1
(
ID UNIQUEIDENTIFIER PRIMARY KEY DEFAULT NEWID(),
NAME VARCHAR(25)
);


INSERT INTO CUSTOMER_PATNA1 VALUES (DEFAULT,'BAHGWAN JHA');
INSERT INTO CUSTOMER_PATNA1 VALUES (DEFAULT,'SOBHA KUMARI');
INSERT INTO CUSTOMER_PATNA1 VALUES (DEFAULT,'NEHA KUMARI');


CREATE TABLE CUSTOMER1 
(
ID UNIQUEIDENTIFIER PRIMARY KEY DEFAULT NEWID(),
NAME VARCHAR(25)
);


INSERT INTO CUSTOMER1
SELECT * FROM CUSTOMER_DELHI1
UNION ALL 
SELECT * FROM CUSTOMER_PATNA1;


