CREATE DATABASE JHA3;
USE JHA3;


CREATE TABLE STUDENT_TBL_KHI
(
EMP_ID INT,
EMP_NAME VARCHAR(50),
GENDER VARCHAR(23),
SALARY INT,
CITY VARCHAR(32),
DEPT_ID INT 
);

DROP TABLE STUDENT_TBL_KHI;

CREATE TABLE STUDENT_TBL_HYD
(
EMP_ID INT,
EMP_NAME VARCHAR(50),
GENDER VARCHAR(23),
SALARY INT,
CITY VARCHAR(32),
DEPT_ID INT 
);

INSERT INTO STUDENT_TBL_HYD VALUES (106,'KATRINA','FEMALE',14000,'HYDRABAD',01);
INSERT INTO STUDENT_TBL_HYD VALUES (106,'SALMAN','FEMALE',14000,'HYDRABAD',02);;

INSERT INTO STUDENT_TBL_HYD VALUES (100,'NORA','FEMALE',24000,'DHERADHUN',01);
INSERT INTO STUDENT_TBL_HYD VALUES (101,'NIKITA','FEMALE',32000,'KASHMIR',02);
INSERT INTO STUDENT_TBL_HYD VALUES (102,'TULSHI','FEMALE',54000,'GOA',03);
INSERT INTO STUDENT_TBL_HYD VALUES (103,'KAKKAR','FEMALE',41000,'DELHI',04);
INSERT INTO STUDENT_TBL_HYD VALUES (104,'BHAGWAN','MALE',98000,'CHENNAI',01);
INSERT INTO STUDENT_TBL_HYD VALUES (105,'SIMRAN','FEMALE',25000,'MUMBAI',02);

DROP TABLE STUDENT_TBL_HYD;

TRUNCATE TABLE MYEMPLOYEE;
SELECT * FROM STUDENT_TBL_KHI;
SELECT * FROM STUDENT_TBL_HYD;

INSERT INTO STUDENT_TBL_KHI SELECT * FROM STUDENT_TBL_HYD; 
TRUNCATE TABLE STUDENT_TBL_KHI;