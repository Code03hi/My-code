-- SELF -JOIN IS A REGULAR JOIN , BUT TH TABLE IS JOINED WITH ITSELF .

CREATE TABLE EMPLOYEE_MANAGER
(
EMP_ID INT PRIMARY KEY,
EMP_NAME VARCHAR(50) NOT NULL,
MANAGER_ID INT
);

INSERT INTO EMPLOYEE_MANAGER VALUES(1,'BHAGWAN',4);
INSERT INTO EMPLOYEE_MANAGER VALUES(2,'NEHA',4);
INSERT INTO EMPLOYEE_MANAGER VALUES(3,'AARAB',6);
INSERT INTO EMPLOYEE_MANAGER VALUES(6,'MEGHA',3);
INSERT INTO EMPLOYEE_MANAGER VALUES(7,'MEGHA',1);
INSERT INTO EMPLOYEE_MANAGER VALUES(8,'MEGHA',1);

DROP TABLE EMPLOYEE_MANAGER;
TRUNCATE TABLE EMPLOYEE_MANAGER;

SELECT * FROM EMPLOYEE_MANAGER;

SELECT A.EMP_NAME AS MANAGER , B.EMP_NAME AS EMPLOYEE 
FROM EMPLOYEE_MANAGER AS A 
INNER JOIN EMPLOYEE_MANAGER AS B
ON A.MANAGER_ID = B.MANAGER_ID;