CREATE TABLE STUDENT_TBL (ID INT , NAME VARCHAR(36),AGE INT,CLASS INT);

INSERT INTO STUDENT_TBL VALUES (1,'B',17,12);
INSERT INTO STUDENT_TBL VALUES (2,'E',20,8);
INSERT INTO STUDENT_TBL VALUES (3,'D',16,9);
INSERT INTO STUDENT_TBL VALUES (4,'C',19,10);
INSERT INTO STUDENT_TBL VALUES (5,'A',18,11);

SELECT * FROM STUDENT_TBL;
TRUCA
TRUNCATE TABLE STUDENT_TBL;

UPDATE STUDENT_TBL SET NAME = 'ME' WHERE ID=3;  -- IMPLICIT TRANSACTION

SELECT * FROM STUDENT_TBL;
TRUNCATE TABEL STUDENT_TBL;

BEGIN TRANSACTION  -- EXPLICITI TRANSACTION
UPDATE STUDENT_TBL SET NAME = 'WHERE' WHERE ID=1

COMMIT TRANSACTION;  -- PERMANENT SAVES IN TABLE 

BEGIN TRANSACTION
UPDATE STUDENT_TBL SET NAME = 'SHE' WHERE ID=4
COMMIT TRANSACTION;  -- PERMANENT SAVES IN TABLE 

SET TRANSACTION ISOLATION LEVEL READ UNCOMMITTED;

ROLLBACK TRANSACTION ; -- UNDO 