select * from [dbo].[EMPLOYEE_DETAILS];

delete column dep_id from [dbo].[EMPLOYEE_DETAILS];
alter table [dbo].[EMPLOYEE_DETAILS] drop dep_id;

select city,gender,sum(salary) as [total salary] 
from employee_details 
group by 
grouping sets
(
(city,gender),
(city),
(gender),
()
)
order by grouping (city),grouping (gender) asc;

create table [source table]
(
id int,
name varchar(25),
gender varchar(36)
);

create table [target table]
(
id int ,
name varchar(36),
gender nvarchar(36)
);

insert into [source table] values (1,'megha','female');
insert into [source table] values (3,'bhagwan jha','male');
insert into [source table] values (4,'mushkan','female');
insert into [source table] values (2,'rahul','male');

insert into [target table] values (4,'bhagwan jha','male');
insert into [target table] values (2,'neha','female');
insert into [target table] values (3,'rahul','male');
insert into [target table] values (1,'mushkan','female');

select * from [source table];
select * from [target table];

drop table [source table];
drop table [target table];

merge [source table] as t
using [target table] as s
on t.id = s.id
when matched then
update set t.name = s.name , t.gender=s.gender;
when not matched by target then 
insert (id,name,gender) values (s.id,s.name.s.gender)
when not matched by source then
delete;

merge [source table] as t
using [target table] as s
on t.id = s.id
when matched then
update set t.name = s.name , t.gender=s.gender
when not matched by target then 
insert (id,name,gender) values (s.id,s.name.s.gender);


truncate table [source table];
truncate table [target table];