CREATE TABLE FOOTBALLPARTICIOANTS
(
ID INT PRIMARY KEY,
NAME VARCHAR(50),
EMAIL VARCHAR(25)
);

CREATE TABLE HOCKEYPARTICIOANTS
(
ID INT PRIMARY KEY,
NAME VARCHAR(50),
EMAIL VARCHAR(25)
);

INSERT INTO FOOTBALLPARTICIOANTS VALUES (1,'BHAGWAN','@MAIL.COM');
INSERT INTO FOOTBALLPARTICIOANTS VALUES (2,'SOBHA','@SOBH.COM');
INSERT INTO FOOTBALLPARTICIOANTS VALUES (3,'MEGHA','@MEGH.COM');
INSERT INTO FOOTBALLPARTICIOANTS VALUES (4,'NEHA','@KUM.COM');

INSERT INTO HOCKEYPARTICIOANTS VALUES (1,'BHAGWAN','@MAIL.COM');
INSERT INTO HOCKEYPARTICIOANTS VALUES (2,'PRIYA','@PRIYA.COM');
INSERT INTO HOCKEYPARTICIOANTS VALUES (3,'PRIYANKA','@PRI.COM');
INSERT INTO HOCKEYPARTICIOANTS VALUES (4,'NIKITA','@KUM.COM');

SELECT * FROM FOOTBALLPARTICIOANTS
UNION ALL
SELECT * FROM HOCKEYPARTICIOANTS;

SELECT * FROM FOOTBALLPARTICIOANTS
UNION 
SELECT * FROM HOCKEYPARTICIOANTS;

SELECT ID,NAME FROM FOOTBALLPARTICIOANTS
UNION 
SELECT ID,NAME,EMAIL FROM HOCKEYPARTICIOANTS;
