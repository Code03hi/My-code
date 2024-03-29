USE PRACTICE;

CREATE TABLE DATASET
(
ID INT IDENTITY,
FIRST_NAME VARCHAR(30),
LAST_NAME VARCHAR(36),
CITY NVARCHAR(36),
AGE INT,
DATE_OF_JOIN DATETIME
);

INSERT INTO DATASET VALUES ('BHAGWAN','JHA','HYDRABAD',10,GETDATE());
INSERT INTO DATASET VALUES ('NEHA','SHAWAN','BENGALORE',40,GETDATE());
INSERT INTO DATASET VALUES ('POOJA','BENIWAL','CHENNAI',20,GETDATE());
INSERT INTO DATASET VALUES ('SANDEEP','SINGH','DELHI',30,GETDATE());
INSERT INTO DATASET VALUES ('ROHIT','KUMAR','KOLKATA',0,GETDATE());


DELETE FROM DATASET WHERE ID = 5;

SELECT * FROM DATASET;

ALTER TABLE DATASET ADD ID INT IDENTITY;

DECLARE MYCURSOR CURSOR SCROLL FOR SELECT * FROM DATASET
OPEN MYCURSOR 
FETCH FIRST FROM MYCURSOR
FETCH NEXT FROM MYCURSOR
FETCH LAST FROM MYCURSOR
FETCH PRIOR FROM MYCURSOR
FETCH ABSOLUTE 2 FROM MYCURSOR
FETCH RELATIVE 2 FROM MYCURSOR
CLOSE MYCURSOR
DEALLOCATE MYCURSOR


-- WITH CURSOR VARIABLES
DECLARE MYCURSOR CURSOR SCROLL FOR SELECT FIRST_NAME,LAST_NAME FROM DATASET
DECLARE @EMP_ID INT,@EMP_NAME VARCHAR(36)
OPEN MYCURSOR 
FETCH FIRST FROM MYCURSOR INTO @EMP_ID,@EMP_NAME
PRINT 'EMPLOYEE IS : ' + CAST(@EMP_ID AS VARCHAR(36)) + ' ' + @EMP_NAME 
FETCH NEXT FROM MYCURSOR INTO @EMP_ID,@EMP_NAME
PRINT 'EMPLOYEE IS : ' + CAST(@EMP_ID AS VARCHAR(36)) + ' ' + @EMP_NAME 
FETCH LAST FROM MYCURSOR INTO @EMP_ID,@EMP_NAME
PRINT 'EMPLOYEE IS : ' + CAST(@EMP_ID AS VARCHAR(36)) + ' ' + @EMP_NAME 
FETCH PRIOR FROM MYCURSOR INTO @EMP_ID,@EMP_NAME
PRINT 'EMPLOYEE IS : ' + CAST(@EMP_ID AS VARCHAR(36)) + ' ' + @EMP_NAME
FETCH ABSOLUTE 2 FROM MYCURSOR INTO @EMP_ID,@EMP_NAME
PRINT 'EMPLOYEE IS : ' + CAST(@EMP_ID AS VARCHAR(36)) + ' ' + @EMP_NAME 
FETCH RELATIVE -1 FROM MYCURSOR INTO @EMP_ID,@EMP_NAME
PRINT 'EMPLOYEE IS : ' + CAST(@EMP_ID AS VARCHAR(36)) + ' ' + @EMP_NAME 
CLOSE MYCURSOR
DEALLOCATE MYCURSOR

DECLARE MYCURSOR CURSOR SCROLL FOR SELECT * FROM DATASET
OPEN MYCURSOR 
FETCH NEXT FROM MYCURSOR
CLOSE MYCURSOR
DEALLOCATE MYCURSOR

DECLARE MYCURSOR CURSOR SCROLL FOR SELECT * FROM DATASET
OPEN MYCURSOR 
FETCH PRIOR FROM MYCURSOR
CLOSE MYCURSOR
DEALLOCATE MYCURSOR

DROP TABLE DATASET;

CREATE TRIGGER TF
ON DATASET
AFTER INSERT
AS 
BEGIN
SELECT * FROM INSERTED
END

DISABLE TRIGGER TF

DROP TRIGGER TF