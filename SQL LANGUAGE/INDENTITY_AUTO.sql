IDENTITY
AUTO INCREMENT
                                             -- SEED AND INCREMENT
CREATE TABLE TEACHER( T_ID INT PRIMARY KEY IDENTITY (100,5) ,T_NAME VARCHAR(50) NOT NULL ,T_QUALIFICATION VARCHAR(50) NOT NULL ,T_SALARY VARCHAR(50) );

SELECT * FROM TEACHER;
DROP TABLE TEACHER;

INSERT INTO TEACHER VALUES ('BHAGWAN','BCA',30000);
INSERT INTO TEACHER VALUES ('NEHA','BA',20000);
INSERT INTO TEACHER VALUES ('SOBHA','BCOM',40000);
INSERT INTO TEACHER VALUES ('MEGHA','BTEC',50000);
INSERT INTO TEACHER VALUES ('NIKITA','BBA',25000);