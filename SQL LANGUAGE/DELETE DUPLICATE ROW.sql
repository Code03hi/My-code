USE PRACTICE;

HOW TO DELETE DUPLICATE ROWS BUT KEEP ONE 

CREATE TABLE EMP3
(
ID INT ,
EMP_NAME VARCHAR(36)
);

INSERT INTO EMP3 VALUES (1,'BHAGWAN JHA');
INSERT INTO EMP3 VALUES (2,'SOBHA JHA');
INSERT INTO EMP3 VALUES (1,'BHAGWAN JHA');
INSERT INTO EMP3 VALUES (2,'NIKITA');
INSERT INTO EMP3 VALUES (4,'NORA FATEHI');
INSERT INTO EMP3 VALUES (3,'PRIYA');
INSERT INTO EMP3 VALUES (1,'BHAGWAN JHA');


WITH DELETE_DUPLICATE_CTE
AS
(
SELECT ID,ROW_NUMBER() OVER (PARTITION BY ID ORDER BY ID) [ROW NUMBER] FROM EMP3 
)DELETE DELETE_DUPLICATE_CTE WHERE [ROW NUMBER] > 1  

SELECT * FROM EMP3;
