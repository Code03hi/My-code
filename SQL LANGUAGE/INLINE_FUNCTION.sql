CREATE FUNCTION FN_GETSTUDENT()
RETURNS TABLE
AS
RETURN (SELECT * FROM BACK_UPTO);

SELECT * FROM BACK_UPTO;

SELECT * FROM DBO.FN_GETSTUDENT();

CREATE FUNCTION FN_GETSTUDENTWITHAGE(@AGE INT )
RETURNS TABLE 
AS 
RETURN (SELECT * FROM BACK_UPTO WHERE DEPT_ID >= @AGE);

SELECT * FROM FN_GETSTUDENTWITHAGE(3) ;

SELECT * FROM MYEMPLOYEE;
SELECT * FROM MYDEPARTMENT;

SELECT * FROM FN_GETSTUDENTWITHAGE(3) AS A
INNER JOIN
MYDEPARTMENT AS B
ON
A.DEPT_ID = B.ID;