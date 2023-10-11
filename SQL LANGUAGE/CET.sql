USE PRACTICE;

CET :- COMMON TABLE EXPRESSION .

CREATE TABLE STUDENT1
(
ID INT IDENTITY,
NAME VARCHAR(50),
GENDER VARCHAR(36),
AGE INT,
[STANDARD] INT
);

INSERT INTO STUDENT1 VALUES ('BHAGWAN JHA','MALE',16,12);
INSERT INTO STUDENT1 VALUES ('RAHUL RAWAT','MALE',15,10);
INSERT INTO STUDENT1 VALUES ('NORA FATEHI','FEMALE',14,11);
INSERT INTO STUDENT1 VALUES ('NIKITA','FEMALE',18,12);
INSERT INTO STUDENT1 VALUES ('RAKESH KUMAR','MALE',16,9);
INSERT INTO STUDENT1 VALUES ('NITIN KUMAR','MALE',15,10);
INSERT INTO STUDENT1 VALUES ('ASHISH KUMAR','MALE',14,11);

SELECT * FROM STUDENT1;

WITH NEW_CTE
AS
(
SELECT * FROM STUDENT1 WHERE GENDER = 'MALE'
)
SELECT * FROM NEW_CTE

WITH NEW_CTE
AS
(
SELECT * FROM STUDENT1 WHERE GENDER = 'MALE'
)
SELECT COUNT(*) FROM NEW_CTE 

WITH NEW_CTE
AS
(
SELECT * FROM STUDENT1 WHERE GENDER = 'MALE'
)
SELECT * FROM NEW_CTE WHERE AGE >= 15; 

WITH NEW_CTE
AS
(
SELECT * FROM STUDENT1 WHERE GENDER = 'MALE'
)
SELECT 'HELLO WORLD'
SELECT COUNT(*) FROM NEW_CTE 

WITH NEW_CTE(STD_ID,STD_NAME,STD_CLASS)
AS
(
SELECT ID,NAME,[STANDARD] FROM STUDENT1 WHERE GENDER = 'MALE'
)
SELECT * FROM NEW_CTE 


UPDATE STUDENT1 SET [STANDARD] = 10 WHERE ID = 5;

WITH NEW_CTE
AS
(
SELECT * FROM STUDENT1
)
DELETE NEW_CTE WHERE ID = 8
UPDATE NEW_CTE SET [STANDARD] = 10 WHERE ID = 5;
INSERT NEW_CTE VALUES ('SOBHA','FEMALE',15,12);

CREATE VIEW VEW_MY_VIEW
AS
WITH NEW_CTE
AS
(
SELECT * FROM STUDENT1 WHERE [STANDARD] = 12 OR [STANDARD] = 11 AND NAME != 'ASHISH KUMAR'
)
SELECT * FROM NEW_CTE

SELECT * FROM VEW_MY_VIEW;


WITH NEW_CTE
AS
(
SELECT * FROM STUDENT1 WHERE [STANDARD] = 12 
),
NEW_CTE1
AS
(
SELECT * FROM STUDENT1 WHERE [STANDARD] = 11 
)
SELECT * FROM NEW_CTE
UNION ALL
SELECT * FROM NEW_CTE1

WITH NEW_CTE
AS
(
SELECT COUNT(*) [TOTAL MALE STUDENT] FROM STUDENT1 WHERE GENDER = 'MALE'
)SELECT * FROM NEW_CTE