CREATE DATABASE TRIGGER_DATA;

USE TRIGGER_DATA;

CREATE TABLE TBL_STUDENT
(
ID INT PRIMARY KEY,
NAME VARCHAR(25),
GENDER VARCHAR(30),
CLASS VARCHAR(36),
FEES INT
);

INSERT INTO TBL_STUDENT VALUES (01,'BHAGWAN','MALE','BCA',90000);
INSERT INTO TBL_STUDENT VALUES (02,'NEHA','FEMALE','BSC',40000);
INSERT INTO TBL_STUDENT VALUES (03,'NIKITA','FEMALE','BED',30000);
INSERT INTO TBL_STUDENT VALUES (04,'MEGHA','FEMALE','BTEC',60000);
INSERT INTO TBL_STUDENT VALUES (05,'ANKITA','FEMALE','BA',40000);
INSERT INTO TBL_STUDENT VALUES (06,'ANKIT','MALE','BBA',50000);
INSERT INTO TBL_STUDENT VALUES (07,'NORA','FEMALE','DANCE',80000);
INSERT INTO TBL_STUDENT VALUES (08,'NORA FATEHI','FEMALE','DANCE',90000);

UPDATE TBL_STUDENT SET NAME = 'PRIYA' WHERE NAME = 'ANKITA'; 

DELETE FROM TBL_STUDENT WHERE ID = 6;

ALTER TABLE TBL_STUDENT ADD LAS VARCHAR(36);
TRUNCATE TABLE TBL_STUDENT;
SELECT * FROM TBL_STUDENT;
DROP TABLE TBL_STUDENT;

CREATE TRIGGER TR_STUDENT_FOR_INSERT
ON
TBL_STUDENT
AFTER INSERT 
AS
BEGIN
PRINT 'SOMETHING HAPPENED TO THE STUDENT TABLE'
END

ALTER TRIGGER TR_STUDENT_FOR_INSERT
ON
TBL_STUDENT
AFTER INSERT 
AS
BEGIN
SELECT * FROM INSERTED
END

CREATE TRIGGER TR_STUDENT_FOR_DELETE
ON
TBL_STUDENT
AFTER DELETE 
AS
BEGIN
SELECT * FROM DELETED
END

CREATE TABLE TBL_STUDENT_AUDIT
(
AUDIT_ID INT PRIMARY KEY IDENTITY,
AUDIT_INFO VARCHAR(MAX)
);

SELECT * FROM TBL_STUDENT_AUDIT;

CREATE TRIGGER TR_STUDENT_AUDIT_FOR_INSERT
ON TBL_STUDENT
AFTER INSERT 
AS
BEGIN
DECLARE @ID INT
SELECT @ID=ID FROM INSERTED
INSERT INTO TBL_STUDENT_AUDIT
VALUES ('STUDENT WITH ID ' + CAST(@ID AS VARCHAR(50)) + ' IS ADDED AT ' + CAST(GETDATE() AS VARCHAR(50)))
END

ALTER TRIGGER TR_STUDENT_AUDIT_FOR_INSERT
ON TBL_STUDENT
AFTER INSERT 
AS
BEGIN
DECLARE @ID INT
SELECT @ID=ID FROM INSERTED
INSERT INTO TBL_STUDENT_AUDIT
VALUES ('STUDENT WITH ID ' + CAST(@ID AS VARCHAR(50)) + ' IS ADDED AT ' + CAST(GETDATE() AS VARCHAR(50)))
END

DROP TRIGGER TR_STUDENT_AUDIT_FOR_DELETE;

CREATE TRIGGER TR_STUDENT_AUDIT_FOR_DELETE
ON TBL_STUDENT
AFTER DELETE 
AS
BEGIN
DECLARE @ID INT
SELECT @ID=ID FROM DELETED
INSERT INTO TBL_STUDENT_AUDIT
VALUES ('STUDENT WITH ID ' + CAST(@ID AS VARCHAR(50)) + ' IS DELETED AT ' + CAST(GETDATE() AS VARCHAR(50)))
END


ALTER TRIGGER TR_STUDENT_AUDIT_FOR_DELETE
ON TBL_STUDENT
AFTER DELETE 
AS
BEGIN
DECLARE @ID INT
SELECT @ID=ID FROM DELETED
INSERT INTO TBL_STUDENT_AUDIT
VALUES ('EXISTING STUDENT WITH ID ' + CAST(@ID AS VARCHAR(50)) + ' IS DELETED AT ' + CAST(GETDATE() AS VARCHAR(70)))
END

CREATE TRIGGER TR_STUDENT_FOR_UPDATE
ON TBL_STUDENT
AFTER UPDATE 
AS
BEGIN
SELECT * FROM DELETED
SELECT * FROM INSERTED
END

SP_HELPTEXT TR_STUDENT_FOR_UPDATE;

select * from ##employee;
