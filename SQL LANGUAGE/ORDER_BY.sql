CREATE DATABASE BHA1;
USE BHA1;

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
INSERT INTO EMPLOYEE_DETAILS VALUES (06,'P','MALE',37000,'MUMBAI');
INSERT INTO EMPLOYEE_DETAILS VALUES (08,'Q','MALE',48000,'KERLA');                                                                                                           
INSERT INTO EMPLOYEE_DETAILS VALUES (09,'U','FEMALE',65000,'HYDRABAD');
INSERT INTO EMPLOYEE_DETAILS VALUES (10,'N','FEMALE',61000,'CHANNAI');
INSERT INTO EMPLOYEE_DETAILS VALUES (11,'L','MALE',32000,'GUJRAT');
INSERT INTO EMPLOYEE_DETAILS VALUES (12,'W','MALE',15000,'GUJRAT');
INSERT INTO EMPLOYEE_DETAILS VALUES (13,'A','FEMALE',73000,'GUJRAT');

SELECT * FROM EMPLOYEE_DETAILS;
DROP TABLE EMPLOYEE_DETAILS;

SELECT * FROM EMPLOYEE_DETAILS 
ORDER BY SALARY DESC,NAME ASC;

SELECT * FROM EMPLOYEE_DETAILS 
ORDER BY SALARY DESC;