CREATE DATABASE MYDATABASE;

USE MYDATABASE;

/*
  SYSTEM DEFINED ERRORS
  IN A SYSTEM DEFIND EXCEPTION THE EXECUTIONS (ERROR) ARE GENERATED BY THE SYSTEMS.
*/

DECLARE @VAL1 INT;
DECLARE @VAL2 INT;

BEGIN TRY
          SET @VAL1 = 8;
		  SET @VAL2 = @VAL1/0; -- ERROR OCCUR HERE
		  PRINT 'LINE 1';
		  PRINT 'LINE 2';
		  PRINT 'LINE 3';
END TRY

BEGIN CATCH
           PRINT 'INSIDE THE CATCH BLOCK'
		   PRINT CONCAT('ERROR_MESSAGE() =', ERROR_MESSAGE());
		   PRINT CONCAT('ERROR_LINE() =' ,ERROR_LINE());
		   PRINT CONCAT('ERROR_NUMBER() =' ,ERROR_NUMBER());
		   PRINT CONCAT('ERROR_SEVERITY() =' ,ERROR_SEVERITY());
		   PRINT CONCAT('ERROR_STATE() =' ,ERROR_STATE());
		   PRINT CONCAT('ERROR_PROCEDURE() =' ,ERROR_PROCEDURE());
END CATCH

(12+0);