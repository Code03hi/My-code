-- IT PRODUCE ERROR WHEN WE EXECUTE THE PROGRAM
CREATE FUNCTION FN_GET_STUDENTS_BY_GENDER(@GENDER VARCHAR(20))
RETURNS @MY_TABLE TABLE(STD_IN INT,STD_NAME VARCHAR(50),GENDER VARCHAR(30))
AS
BEGIN
INSERT INTO @MY_TABLE
SELECT * FROM STUDENT_BIO_DATA WHERE GENDER = @GENDER
RETURN 
END


CREATE FUNCTION FN_GET_STUDENTS_BY_GENDER(@GENDER VARCHAR(20))
RETURNS @MY_TABLE TABLE(STD_IN INT,STD_NAME VARCHAR(50),GENDER VARCHAR(30))
AS
BEGIN
INSERT INTO @MY_TABLE
SELECT STD_ID,STD_NAME,GENDER FROM STUDENT_BIO_DATA WHERE GENDER = @GENDER
RETURN 
END

SELECT * FROM FN_GET_STUDENTS_BY_GENDER('FEMALE');
SELECT * FROM FN_GET_STUDENTS_BY_GENDER('MALE');
SELECT * FROM STUDENT_BIO_DATA;


CREATE FUNCTION FN_GET_STUDENTS_BY_GENDER2(@GENDER VARCHAR(20))
RETURNS TABLE
AS
 RETURN ( SELECT STD_ID,STD_NAME,GENDER FROM STUDENT_BIO_DATA WHERE GENDER = @GENDER)

SELECT * FROM FN_GET_STUDENTS_BY_GENDER('MALE');
SELECT * FROM FN_GET_STUDENTS_BY_GENDER2('MALE');
