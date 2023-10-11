CREATE TRIGGER TR_DATABASE_TRIGGER
ON DATABASE
FOR CREATE_TABLE
AS
BEGIN
PRINT 'YOU ARE NOT ALLOWED TO CREATE A TABLE '
END

DROP TRIGGER TR_DATABASE_TRIGGER ON DATABASE;

CREATE TABLE TR
(
ID INT IDENTITY
);

CREATE TRIGGER TR_SERVER_TRIGGER
ON ALL SERVER
FOR CREATE_TABLE
AS
BEGIN
PRINT 'YOU ARE NOT ALLOWED TO CREATE A TABLE '
END

ALTER TRIGGER TR_SERVER_TRIGGER
ON ALL SERVER
FOR CREATE_TABLE
AS
BEGIN
ROLLBACK
PRINT 'YOU ARE NOT ALLOWED TO CREATE A TABLE '
END

CREATE TABLE TR_TR_SERVER_TRIGGER 
(ID INT);

DROP TRIGGER TR_SERVER_TRIGGER ON ALL SERVER;
DROP TRIGGER TR_SERVER_TRIGGER_VIEW ON ALL SERVER;

ENABLE TRIGGER TR_SERVER_TRIGGER ON ALL SERVER;
DISABLE TRIGGER TR_SERVER_TRIGGER ON ALL SERVER;
DISABLE TRIGGER TR_SERVER_TRIGGER_VIEW ON ALL SERVER;
ENABLE TRIGGER TR_SERVER_TRIGGER_VIEW ON ALL SERVER;


CREATE TRIGGER TR_SERVER_TRIGGER_VIEW
ON ALL SERVER
FOR CREATE_VIEW
AS
BEGIN
ROLLBACK
PRINT 'YOU ARE NOT ALLOWED TO CREATE A VIEW '
END

CREATE VIEW VIEW_ON
AS
SELECT * FROM TR;

SP_HELPTEXT TR_SERVER_TRIGGER ON SERVER ;

DROP VIEW VIEW_ON;