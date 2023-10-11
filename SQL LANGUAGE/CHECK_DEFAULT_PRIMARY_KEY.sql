CREATE TABLE VOTER_LIST
(
VOTER_ID INT PRIMARY KEY,
VOTER_NAME VARCHAR(30) NOT NULL,
VOTER_AGE INT NOT NULL CHECK(VOTER_AGE>=18),
VOTER_NEW_AGE INT NOT NULL DEFAULT(18)
);


SELECT * FROM VOTER_LIST;
SELECT VOTER_NAME,VOTER_AGE,VOTER_NEW_AGE FROM VOTER_LIST;
SELECT VOTER_NAME,VOTER_AGE,VOTER_NEW_AGE FROM VOTER_LIST WHERE VOTER_NAME = 'MEGHA' OR VOTER_ID=3;
SELECT * FROM VOTER_LIST ORDER BY VOTER_NAME ASC; -- ASCENDING ORDER
SELECT * FROM VOTER_LIST ORDER BY VOTER_NAME DESC; -- DESENDING ORDER
SELECT VOTER_NAME FROM VOTER_LIST ORDER BY VOTER_NAME ASC;
SELECT VOTER_NAME,VOTER_AGE FROM VOTER_LIST WHERE VOTER_ID=3;

INSERT INTO VOTER_LIST
(VOTER_ID,VOTER_NAME,VOTER_AGE)
VALUES
(03,'BHAGWAN',18),
(04,'NEHA',19),
(05,'SUBHI',20),
(06,'MEGHA',21);
UPDATE VOTER_LIST SET VOTER_NAME='SOBHA' WHERE VOTER_NAME='NEHA';

INSERT INTO VOTER_LIST (VOTER_ID,VOTER_NAME,VOTER_AGE) VALUES (07,'SANDEEP',18);


TRUNCATE TABLE VOTER_LIST;
DROP TABLE VOTER_LIST;