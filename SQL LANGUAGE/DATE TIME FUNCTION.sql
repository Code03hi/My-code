USE QUES;

DATE & TIME FUNCTION IN SQL SERVER

1. GETDATE() :- RETURN THE CURRENT DATE AND TIME          
2. SYSDATETIME() :- RETURN THE CURRENT DATE AND TIME , RETURN 7 PRECISION OF SECONDS. 
3. CURRENT_TIMESTAMP :- RETURN THE CURRENT DATE AND TIME
4. DATENAME() :- RETURNS THE NAME OF THE DAY , YEAR, MONTH ETC FROM A GIVEN DATE .
5. DATEDIFF() :- RETURNS THE DIFFERENCE BETWEEN TWO DATES .
6. DATEADD()  :- ADDS OR SUBTRACTS A SPECIFIED TIME INTERVAL FROM A DATE
7. DAY()      :- RETURNS THE DAY FROM THE GIVEN DATE .
9. MONTH()    :- RETURNS THE MONTH FROM THE GIVEN DATE .
10. YEAR()    :- RETURNS THE YEAR FROM THE GIVEN DATE .
11. ISDATE()  :- CHECK IF THE EXPRESSION IS A VALID DATE . THE ISDATE() FUNCTION CHECK AN EXPRESSION AND RETURNS 1 IF IT IS A VALID DATE , OTHERWISE 0 .
12. DATEPART() :- RETURNS A SINGLE PART OF A DATE/TIME . 

SELECT GETDATE()
SELECT CONVERT(VARCHAR,GETDATE(),100)

SELECT SYSDATETIME();
SELECT CONVERT(VARCHAR,SYSDATETIME());

SELECT CURRENT_TIMESTAMP
SELECT CONVERT(VARCHAR,CURRENT_TIMESTAMP());

SELECT DATENAME(MONTH,GETDATE()); JANUARY,FEBRUARY,MARCH
SELECT DATENAME(YEAR,GETDATE());
SELECT DATENAME(DAY,GETDATE());
SELECT DATENAME(HOUR,GETDATE());
SELECT DATENAME(MINUTE,GETDATE());
SELECT DATENAME(SECOND,GETDATE());
SELECT DATENAME(MONTH,'JANUARY 05 2021');
SELECT DATENAME(MONTH,'03-05-2021'); :- MARCH

SELECT DATEDIFF(YEAR,'02-01-2020',GETDATE());
SELECT DATEDIFF(MONTH,'02-01-2020',GETDATE());
SELECT DATEDIFF(DAY,'02-01-2020',GETDATE());
SELECT DATEDIFF(YEAR,'02-01-2020',CURRENT_TIMESTAMP);
SELECT DATEDIFF(HOUR,'02-01-2020',CURRENT_TIMESTAMP);
SELECT DATEDIFF(MINUTE,'02-01-2020',CURRENT_TIMESTAMP);
SELECT DATEDIFF(SECOND,'02-01-2020',CURRENT_TIMESTAMP);

SELECT DATEADD(DAY,2,GETDATE());
SELECT DATEADD(DAY,-2,GETDATE());
SELECT DATEADD(MONTH,2,GETDATE());
SELECT DATEADD(MONTH,-2,GETDATE());
SELECT DATEADD(YEAR,2,GETDATE());
SELECT DATEADD(YEAR,-2,GETDATE());
SELECT DATEADD(HOUR,2,GETDATE());
SELECT DATEADD(MINUTE,2,GETDATE());
SELECT DATEADD(SECOND,2,GETDATE());

SELECT DATEPART(YEAR,GETDATE()) AS 'CURRENT YEAR' ;
SELECT DATEPART(MONTH,GETDATE()) AS 'CURRENT MONTH' ;
SELECT DATEPART(DAY,GETDATE()) AS 'CURRENT DAY' ;
SELECT DATEPART(HOUR,GETDATE()) AS 'CURRENT HOUR' ;
SELECT DATEPART(MINUTE,GETDATE()) AS 'CURRENT MINUTE' ;
SELECT DATEPART(SECOND,GETDATE()) AS 'CURRENT SECOND' ;
SELECT DATEPART(YEAR,'JANUARY 12 2022') AS 'CURRENT YEAR' ;
SELECT DATEPART(YEAR,'18-12-2022') AS 'CURRENT YEAR' ;
SELECT DATEPART(MONTH,'18-12-2022') AS 'CURRENT MONTH' ;
SELECT DATEPART(DAY,'18-12-2022') AS 'CURRENT DAY' ;


SELECT DAY(12-25-2022);
SELECT MONTH(12-25-2022);
SELECT YEAR(12-25-2022);
SELECT DAY(GETDATE());
SELECT MONTH(GETDATE());
SELECT YEAR(GETDATE());

SELECT ISDATE('02-26-1993') AS [VAILD DATE];

SELECT ISDATE('02-26-1993') AS [NOT VAILD DATE];
