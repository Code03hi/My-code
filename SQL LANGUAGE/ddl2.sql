CREATE TABLE TRA
(
ID INT IDENTITY,
NAME NVARCHAR(25)
);

CREATE TRIGGER INSERT_TR
ON TRA
AFTER INSERT
AS
BEGIN
PRINT 'YOU ARE NOT TO ALLOWED TO INSERT OPERATION IN THIS DATABASE '
END

DROP TRIGGER INSERT_TR;

ALTER TRIGGER INSERT_TR_UPDATE
ON TRA
AFTER UPDATE
AS
BEGIN
PRINT 'YOU ARE NOT TO ALLOWED TO UPDATE OPERATION IN THIS DATABASE '
END

ALTER TRIGGER INSERT_TR_DELETE
ON TRA
AFTER DELETE
AS
BEGIN
PRINT 'YOU ARE NOT TO ALLOWED TO DELETE OPERATION IN THIS DATABASE '
END

INSERT INTO TRA VALUES ('BHAGWAN');
INSERT INTO TRA VALUES ('MEGHA');
INSERT INTO TRA VALUES ('KRISHNA');
INSERT INTO TRA VALUES ('NEHA');

UPDATE TRA SET NAME = 'SOBHA' WHERE ID = 3 ;
INSERT INTO TRA VALUES ('NEHA');
DELETE FROM TRA WHERE ID = 3;


EXECUTE SP_SETTRIGGERORDER
@TRIGGERNAME = 'INSERT_TR_UPDATE',
@ORDER = 'FIRST',
@STMTTYPE = 'UPDATE';