CREATE DATABASE DML;

USE DML;

CREATE TABLE EMPLOYEE
(
EMP_ID INT IDENTITY ,
EMP_FIRST_NAME VARCHAR(36),
EMP_LAST_NAME VARCHAR(69),
ADDRESS VARCHAR(36)
);

CREATE TABLE SALARY
(
DMP_ID INT IDENTITY ,
DESINATION VARCHAR(36),
SALARY BIGINT
);

INSERT INTO EMPLOYEE VALUES ('BHAGWAN','JHA','HYDRABAD');
INSERT INTO EMPLOYEE VALUES ('SANDEEP','JHA','BANGLORE');
INSERT INTO EMPLOYEE VALUES ('MEGHA','JHA','PATNA');
INSERT INTO EMPLOYEE VALUES ('SOBHA','JHA','MEERUT');

INSERT INTO SALARY VALUES ('ACCOUNTANT',36000);
INSERT INTO SALARY VALUES ('MANAGER',66000);
INSERT INTO SALARY VALUES ('CODER',96000);
INSERT INTO SALARY VALUES ('PROGRAMMER',100000);

SELECT * FROM EMPLOYEE;
SELECT * FROM SALARY;

CREATE VIEW JOIN_ON
AS
SELECT * FROM EMPLOYEE AS A
FULL JOIN SALARY AS S
ON A.EMP_ID = S.DMP_ID;

DROP TABLE SALARY;

ALTER VIEW JOIN_ON
AS
SELECT * FROM EMPLOYEE AS A
INNER JOIN SALARY AS S
ON A.EMP_ID = S.DMP_ID;

SELECT * FROM JOIN_ON;

CREATE TRIGGER VIEW_TABLE
ON JOIN_ON
INSTEAD OF DELETE
AS 
BEGIN 
PRINT 'SOMEBODY ARE TRY TO DELETE DATA FROM MY DATABASE '
END

ALTER TRIGGER VIEW_TABLE
ON JOIN_ON
WITH ENCRYPTION
INSTEAD OF DELETE
AS 
BEGIN 
DELETE FROM EMPLOYEE WHERE EMP_ID IN
(SELECT EMP_ID FROM DELETED)
DELETE FROM SALARY WHERE DMP_ID IN
(SELECT DMP_ID FROM DELETED)
END

DELETE FROM JOIN_ON WHERE DMP_ID = 4;

SP_HELPTEXT VIEW_TABLE;