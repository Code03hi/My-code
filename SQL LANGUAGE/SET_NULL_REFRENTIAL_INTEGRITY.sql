CREATE DATABASE B2;

USE B2;

CREATE TABLE CUSTOMER
(
CUSTOMER_ID INT PRIMARY KEY,
CUSTOMER_NAME VARCHAR(36),
ADDRESS VARCHAR(MAX),
CITY VARCHAR(30)
);

CREATE TABLE ORDER_TABLE
(
ORDER_ID INT PRIMARY KEY,
ORDER_ITEM VARCHAR(30),
ORDER_QUANTITY VARCHAR(30),
PRICE_OF_01 INT,
CUSTOMER_ID INT FOREIGN KEY REFERENCES CUSTOMER (CUSTOMER_ID)
ON UPDATE SET NULL
ON DELETE SET NULL 
);


INSERT INTO CUSTOMER (CUSTOMER_ID,CUSTOMER_NAME,ADDRESS,CITY)  VALUES
(01,'BHAGWAN','MEERUT','UTTAR_PRADESH'),
(02,'S','MANDAWALI','DELHI'),
(03,'M','ANDHRE','MUMBAI'),
(04,'M','ANDHRE','MUMBAI');

INSERT INTO ORDER_TABLE (ORDER_ID,ORDER_ITEM,ORDER_QUANTITY,PRICE_OF_01,CUSTOMER_ID) VALUES
(01,'HARDDISK',5,100,01),
(02,'MONITOR',8,200,02),
(04,'MOUSE',6,300,03),
(06,'HARDDRIVE',6,300,03),
(05,'MOUSE',6,300,02);

SELECT * FROM CUSTOMER;
SELECT * FROM ORDER_TABLE;

DELETE FROM CUSTOMER WHERE CUSTOMER_ID=3;
UPDATE CUSTOMER SET CUSTOMER_ID=3 WHERE CUSTOMER_ID=2;

DROP TABLE CUSTOMER;
DROP TABLE ORDER_TABLE;

CREATE TABLE Persons (
    ID int NOT NULL,
    LastName varchar(255) NOT NULL,
    FirstName varchar(255),
    Age int,
    City varchar(255) DEFAULT 'Sandnes'
);