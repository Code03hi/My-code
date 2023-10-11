USE COMPUTED;

CREATE TABLE PRODUCT_SALE
(
P_ID INT IDENTITY PRIMARY KEY,
P_NAME VARCHAR(36),
P_QUA INT,
P_PRICE INT
);

INSERT INTO PRODUCT_SALE VALUES ('SOAP',4,6);
INSERT INTO PRODUCT_SALE VALUES ('TOMATO SUES',2,5);
INSERT INTO PRODUCT_SALE VALUES ('POTATO CHIPS',3,2);

ALTER TABLE PRODUCT_SALE ADD [TOTAL SALE ] AS [P_QUA] * [P_PRICE] PERSISTED;

SELECT * FROM PRODUCT_SALE;

DROP TABLE PRODUCT_SALE;

CREATE INDEX ID_IX
ON PRODUCT_SALE  (TOTAL SALE ASC);