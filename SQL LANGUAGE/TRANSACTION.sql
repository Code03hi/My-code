CREATE TABLE TABLEA
(
ID INT IDENTITY PRIMARY KEY,
NAME VARCHAR(50)
);

GO
INSERT INTO TABLEA VALUES ('MARKS')
GO

CREATE TABLE TABLEB
(
ID INT IDENTITY PRIMARY KEY,
NAME VARCHAR(50)
);

GO
INSERT INTO TABLEB VALUES ('MARKS')
GO

SELECT * FROM TABLEA;
SELECT * FROM TABLEB;

-- TRANSACTION 1
BEGIN TRAN
UPDATE TABLEA SET NAME = 'Mark Transaction 1'
WHERE ID=1;

-- FROM TRANSACTION 2 WINDOW EXECUTE THE SECOND
-- UPDATE STATEMENT

UPDATE TABLEB SET NAME = 'Mary Transaction 1'
WHERE ID=1;

-- FROM TRANSACTION 2 WINDOW EXECUTE THE SECOND
-- UPDATE STATEMENT

COMMIT TRANSACTION

-- TRANSACTION 2
BEGIN TRAN
UPDATE TABLEB SET NAME = 'Mark Transaction 2'
WHERE ID=1;

-- FROM TRANSACTION 1 WINDOW EXECUTE THE SECOND
-- UPDATE STATEMENT

UPDATE TABLEA SET NAME = 'Mary Transaction 2'
WHERE ID=1;

-- After a few second notice that one of the
-- transaction complete succcesfully while the
-- other transaction is nade the deadlock victim

COMMIT TRANSACTION
