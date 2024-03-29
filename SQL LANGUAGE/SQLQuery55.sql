USE [TRIGGER_DATA]
GO
/****** Object:  Trigger [dbo].[TR_STUDENT_AUDIT_FOR_INSERT]    Script Date: 26-11-2022 22:22:12 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
ALTER TRIGGER [dbo].[TR_STUDENT_AUDIT_FOR_INSERT]
ON [dbo].[TBL_STUDENT]
AFTER INSERT 
AS
BEGIN
DECLARE @ID INT
SELECT @ID=ID FROM INSERTED
INSERT INTO TBL_STUDENT_AUDIT
VALUES ('STUDENT WITH ID ' + CAST(@ID AS VARCHAR(50)) + ' IS ADDED AT ' + CAST(GETDATE() AS VARCHAR(50)))
END

