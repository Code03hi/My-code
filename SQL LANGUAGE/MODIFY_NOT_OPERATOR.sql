create table emp
(
id int UNIQUE , 
name varchar(23)
);
insert into emp values (23,'bhagwan','jha');
insert into emp values (22,'me','jha');
insert into emp values (20,'so','jha');
SELECT * FROM EMP;
truncate table emp;

alter table emp drop COLUMN last_NAME;
select * from emp;
alter table emp add LAST_NAME varchar(30);
alter table emp rename coulum id to id2  ;  unique
alter table emp modify id varchar(30) ;
alter table emp rename to employee;