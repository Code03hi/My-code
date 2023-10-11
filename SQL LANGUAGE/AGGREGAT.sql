SQL SERVER AGGREGATE FUNCTIONS PERFORM A CALCULATION ON A SET OF VALUE AND RETURN A SINGLE VALUE .
SUM
MAX
MIN
AVG
COUNT

USE UNION_DATABASE;

CREATE TABLE EMPLOYEE_DETAILS
(
ID INT PRIMARY KEY,
NAME VARCHAR(50) NOT NULL,
GENDER VARCHAR(50) ,
SALARY INT,
CITY VARCHAR(50)
);

INSERT INTO EMPLOYEE_DETAILS VALUES (01,'BHAGWAN','MALE',25000,'DELHI');
INSERT INTO EMPLOYEE_DETAILS VALUES (02,'N','MALE',25000,'KASHMIR');
INSERT INTO EMPLOYEE_DETAILS VALUES (03,'S','FEMALE',25000,'TAMIL');
INSERT INTO EMPLOYEE_DETAILS VALUES (04,'B','MALE',35000,'KERLA');
INSERT INTO EMPLOYEE_DETAILS VALUES (05,'M','FEMALE',45000,'HYDRABAD');
INSERT INTO EMPLOYEE_DETAILS VALUES (06,'P','MALE',55000,'MUMBAI');
INSERT INTO EMPLOYEE_DETAILS VALUES (07,'Q','FEMALE',65000,'PATNA');

SELECT * FROM EMPLOYEE_DETAILS;
DROP TABLE EMPLOYEE_DETAILS;

SELECT SUM(SALARY) AS TOTAL_SALARY FROM EMPLOYEE_DETAILS;
SELECT MAX(SALARY) AS MAXIMUM_SALARY FROM EMPLOYEE_DETAILS;
SELECT MIN(SALARY) AS MINIMUM_SALARY FROM EMPLOYEE_DETAILS;
SELECT AVG(SALARY) AS AVERAGE_SALARY FROM EMPLOYEE_DETAILS;
SELECT COUNT(SALARY) AS NUMBER_OF_SALARY FROM EMPLOYEE_DETAILS;