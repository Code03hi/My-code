CREATE DATABASE BHAGWAN_03;
USE BHAGWAN_03;

CREATE TABLE EMPLOYEE
(
EMIP_ID INT UNIQUE NOT NULL ,
EMIP_NAME VARCHAR(25) NOT NULL ,
EMP_DPT VARCHAR(50) NOT NULL,
SALARY INT NOT NULL
);

SELECT * FROM EMPLOYEE;
TRUNCATE TABLE EMPLOYEE;
INSERT INTO EMPLOYEE VALUES (01,'BHAGWAN','PROGRAMMER',78000);

UPDATE EMPLOYEE SET SALARY = 85000 WHERE = 'MEGHA' ;

INSERT INTO EMPLOYEE (EMIP_ID,EMIP_NAME,EMP_DPT,SALARY) VALUES
(01,'BHAGWAN','PROGRAMMER',78000),
(02,'SOBHA','HOUSEWIFE',78000),
(03,'MEGHA','GIRL_FRIEND',78000),
(04,'NEHA','FRIEND',78000);
