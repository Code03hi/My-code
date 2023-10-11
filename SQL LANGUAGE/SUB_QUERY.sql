CREATE TABLE MYDEPARTMENT
(
ID INT PRIMARY KEY,
DEPT_NAME VARCHAR(25)
);

CREATE TABLE MYEMPLOYEE 
(
EMP_ID INT,
EMP_NAME VARCHAR(50),
GENDER VARCHAR(23),
SALARY INT,
CITY VARCHAR(32),
DEPT_ID INT FOREIGN KEY REFERENCES MYDEPARTMENT(ID)
);

INSERT INTO MYDEPARTMENT VALUES (1,'ACCOUNTS');
INSERT INTO MYDEPARTMENT VALUES (2,'FINANCE');
INSERT INTO MYDEPARTMENT VALUES (3,'DESIGN');
INSERT INTO MYDEPARTMENT VALUES (4,'MANUFACTURING');

INSERT INTO MYEMPLOYEE  VALUES (100,'NORA','FEMALE',24000,'DHERADHUN',01);
INSERT INTO MYEMPLOYEE VALUES (101,'NIKITA','FEMALE',32000,'KASHMIR',02);
INSERT INTO MYEMPLOYEE VALUES (102,'TULSHI','FEMALE',54000,'GOA',03);
INSERT INTO MYEMPLOYEE VALUES (103,'KAKKAR','FEMALE',41000,'DELHI',04);
INSERT INTO MYEMPLOYEE VALUES (104,'BHAGWAN','MALE',98000,'CHENNAI',01);
INSERT INTO MYEMPLOYEE VALUES (105,'SIMRAN','FEMALE',25000,'MUMBAI',02);
INSERT INTO MYEMPLOYEE VALUES (106,'KATRINA','FEMALE',14000,'HYDRABAD',01);
INSERT INTO MYEMPLOYEE VALUES (106,'KAIF','FEMALE',14000,'HYDRABAD',01);
INSERT INTO MYEMPLOYEE VALUES (106,'SALMAN','FEMALE',14000,'HYDRABAD',02);
TRUNCATE TABLE MYEMPLOYEE;

SELECT * FROM MYDEPARTMENT;
SELECT * FROM MYEMPLOYEE;

SELECT * FROM MYEMPLOYEE
WHERE CITY IN
(SELECT CITY FROM MYEMPLOYEE WHERE SALARY > 20000);

UPDATE MYEMPLOYEE SET SALARY = SALARY+2000
WHERE EMP_ID IN
(SELECT EMP_ID FROM MYEMPLOYEE WHERE CITY = 'HYDRABAD');

DELETE FROM MYEMPLOYEE
WHERE EMP_ID IN
(SELECT EMP_ID FROM MYEMPLOYEE WHERE CITY = 'HYDRABAD');

SELECT * FROM MYEMPLOYEE
WHERE DEPT_ID IN
(SELECT ID FROM MYDEPARTMENT WHERE DEPT_NAME = 'ACCOUNTS');

SELECT * FROM MYEMPLOYEE
WHERE EMP_ID IN
(SELECT EMP_ID FROM MYEMPLOYEE WHERE CITY = 'MUMBAI');

SELECT * FROM MYEMPLOYEE
WHERE EMP_ID IN
(SELECT EMP_ID FROM MYEMPLOYEE WHERE GENDER = 'FEMALE');

SELECT * FROM MYEMPLOYEE
WHERE EMP_ID IN
(SELECT EMP_ID FROM MYEMPLOYEE WHERE SALARY > 20000 )
ORDER BY EMP_NAME;
