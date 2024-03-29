CREATE DATABASE CUSTOMER_DETAILS;
USE CUSTOMER_DETAILS;
SHOW DATABASES;
CREATE TABLE CUSTOMERS 
(
ID INT,
NAME VARCHAR(20),
AGE INT,
ADDRESS CHAR(25),
SALARY DECIMAL(18,2),
PRIMARY KEY (ID)
);
SHOW TABLES;
DESCRIBE CUSTOMERS;
SELECT * FROM CUSTOMERS;
ALTER TABLE CUSTOMERS MODIFY SALARY DECIMAL(18,2) DEFAULT 5000.00;
DROP DATABASE CUSTOMER_DETAILS; IF EXITS;
DROP TABLE CUSTOMERS;